/*
 * @author Jan Nowak
 * https://en.wikipedia.org/wiki/Fibonacci_sequence
 */

#include "zad4.h"
#include "iostream"


using namespace std;

int main(){
    int number = 7;
    try {
        cout << "Fibonaci by iteration where n: " << number << " is equal to: " << fibonaciIter(number) << endl;
        cout << "Fibonaci by recursion where n: " << number << " is equal to: " << fibonaciRek(number) << endl;

    } catch (const exception& e) {
        cout << "Błąd: " << e.what() << endl;
    }


    return 0;
}