/*
 * @author Jan Nowak
 * https://pl.wikipedia.org/wiki/Problem_Collatza
 */
#include <vector>
#include <stdexcept>

using namespace std;

#ifndef LISTA_1_ZAD5_H
#define LISTA_1_ZAD5_H

/*
 * Generates the Collatz sequence starting from a given number.
 *
 * @param c (int) - The starting number for the Collatz sequence (positive integer).
 * @return (std::vector<int>) - A vector containing the numbers in the Collatz sequence,
 *                             starting with the input number and ending with 1.
 * @throws std::invalid_argument - If c is negative or zero.
 */
std::vector<int> collatz(int c);

#endif //LISTA_1_ZAD5_H
