/*
 * @author Jan Nowak
 * https://en.wikipedia.org/wiki/Fibonacci_sequence
 */
#include "zad4.h"

int fibonaciIter(int n){
    if (n < 0) {
        throw invalid_argument("n can not be negative");
    }
    if (n == 0) return 0;
    if (n == 1) return 1;

    int a = 0, b = 1, sum = 0;

    for (int i = 2; i <= n; i++) {
        sum = a + b;
        a = b;
        b = sum;
    }

    return sum;
}


int fibonaciRek(int n){
    if (n < 0) {
        throw invalid_argument("n can not be negative");
    }
    if (n == 0) return 0;
    if (n == 1) return 1;

    return fibonaciRek(n - 1) + fibonaciRek(n - 2);

}