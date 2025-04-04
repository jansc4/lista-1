/*
 * @author Jan Nowak
 * https://en.wikipedia.org/wiki/Fibonacci_sequence
 */
#include <stdexcept>

using namespace std;

#ifndef LISTA_1_ZAD4_H
#define LISTA_1_ZAD4_H

/*
 * Calculates the nth Fibonacci number using an iterative approach.
 *
 * @param n (int) - The index of the Fibonacci number to calculate (non-negative).
 * @return (int) - The nth Fibonacci number.
 * @throws std::invalid_argument - If n is negative.
 */
int fibonaciIter(int n);

/*
 * Calculates the nth Fibonacci number using a recursive approach.
 *
 * @param n (int) - The index of the Fibonacci number to calculate (non-negative).
 * @return (int) - The nth Fibonacci number.
 * @throws std::invalid_argument - If n is negative.
 */
int fibonaciRek(int n);


#endif //LISTA_1_ZAD4_H
