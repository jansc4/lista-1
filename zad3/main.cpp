/*
 * @author Jan Nowak
 * https://www.geeksforgeeks.org/left-shift-right-shift-operators-c-cpp/
 * https://www.w3schools.com/cpp/cpp_vectors.asp
 */

#include "iostream"
#include "zad3.h"

using namespace std;


int main() {
    vector<char> x = {'a', 'b', 'c', 'd', 'e', 'f'};

    try {
        vector<vector<char>> result = podzbiory(x);
        printSubsets(result);
    } catch (const exception& e) {
        cout << "Błąd: " << e.what() << endl;
    }

    return 0;
}