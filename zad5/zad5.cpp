/*
 * @author Jan Nowak
 * https://pl.wikipedia.org/wiki/Problem_Collatza
 */

#include "zad5.h"


vector<int> collatz(int c) {
    if (c <= 0) {
        throw invalid_argument("c can not be negative or 0");
    }

    vector<int> elements;
    elements.push_back(c);

    while (c != 1) {  // Warunek zakończenia: liczba osiągnie 1
        if (c % 2 == 0) {
            c /= 2;  // Jeśli parzysta, dzielimy przez 2
        } else {
            c = 3 * c + 1;  // Jeśli nieparzysta, stosujemy wzór 3n + 1
        }
        elements.push_back(c);
    }

    return elements;
}