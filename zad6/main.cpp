/*
 * @author Jan Nowak
 * https://www.w3schools.com/cpp/cpp_constructors.asp
 * https://pl.wikipedia.org/wiki/Aminokwasy_białkowe
 *
 */

#include "zad6.h"
#include "iostream"

int main(){

    vector<char> example = {'A', 'T', 'G', 'C', 'T', 'T'};
    Protein protein(example);
    try{
        protein.komplement();
        protein.transkrybuj();
        protein.transluj();
    } catch (const exception& e) {
        cout << "Error: " << e.what() << endl;
    }



    cout << " DNA 5'->3': ";
    Protein::printVector(protein.getDna53());

    cout << "\n DNA 3'->5': ";
    Protein::printVector(protein.getDna35());

    cout << "\n mRNA: ";
    Protein::printVector(protein.getMrna());

    cout << "\n Protein sequence: ";
    Protein::printVector(protein.getProteinSequence());

    return 0;
}
