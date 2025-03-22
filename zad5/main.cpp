/*
 * @author Jan Nowak
 * https://pl.wikipedia.org/wiki/Problem_Collatza
 */

#include "iostream"
#include "zad5.h"
using namespace std;

int main() {
    int n;
    cout << "Type starting number: ";
    cin >> n;

    try {
        vector<int> result = collatz(n);
        cout << "Collatz's series: ";
        for (int num : result) {
            cout << num << " ";
        }
        cout << endl;
    } catch (const exception &e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}