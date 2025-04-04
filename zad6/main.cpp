/*
 * @author Jan Nowak
 * https://www.w3schools.com/cpp/cpp_constructors.asp
 * https://pl.wikipedia.org/wiki/Aminokwasy_białkowe
 *
 */

#include "zad6.h"
#include <iostream>

int main() {
    vector<char> DNA53 = {'A', 'T', 'G', 'C', 'T', 'T'};

    try {
        vector<char> DNA35 = komplement(DNA53);
        vector<char> mRNA = transkrybuj(DNA35);
        vector<char> protein = transluj(mRNA);

        cout << " DNA 5'->3': ";
        printVector(DNA53);

        cout << "\n DNA 3'->5': ";
        printVector(DNA35);

        cout << "\n mRNA: ";
        printVector(mRNA);

        cout << "\n Protein sequence: ";
        printVector(protein);

    } catch (const exception &e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}