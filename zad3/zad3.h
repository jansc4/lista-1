/*
 * @author Jan Nowak
 */

#include <vector>
#include <stdexcept>
#include <iostream>

using namespace std;

#ifndef LISTA_1_ZAD3_H
#define LISTA_1_ZAD3_H


/*
 * Generates all possible subsets of a given set of characters.
 *
 * @param x (const std::vector<char>&) - The input set of characters.
 * @return (std::vector<std::vector<char>>) - A vector containing all possible subsets.
 * @throws std::invalid_argument - If the input set is empty.
 */
std::vector<std::vector<char>> podzbiory(const std::vector<char>& x);

/*
 * Prints all the subsets of a given set of characters.
 *
 * @param subsets (const std::vector<std::vector<char>>&) - The vector of subsets to print.
 */
void printSubsets(const std::vector<std::vector<char>>& subsets);

#endif //LISTA_1_ZAD3_H
