/*
 * @author Jan Nowak
 *https://www.w3schools.com/cpp/cpp_syntax.asp
 * https://pl.wikipedia.org/wiki/Wzór_Herona
 */

#include <iostream>
#include "zad1.h"

using namespace std;

int main() {
    double x,y,z;

    cout << "Type a length of side number one:";
    cin >> x;
    cout << "Type a length of side number two:";
    cin >> y;
    cout << "Type a length of side number three:";
    cin >> z;

    try {
        cout << "Triangle area: " << heron(x, y, z) << "\n";

    } catch (const exception &e) {
        cout << "Error: " << e.what() << "\n";
    }

    return 0;
}
