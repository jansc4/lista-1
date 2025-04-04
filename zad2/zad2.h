/*
 * @author Jan Nowak
 */
#include <vector>
#include <stdexcept>
#include <map>

#ifndef LISTA_1_ZAD2_H
#define LISTA_1_ZAD2_H

/*
 * Finds common elements in two integer vectors, considering their frequencies.
 *
 * @param arr1 (const std::vector<int>&) - The first input vector.
 * @param arr2 (const std::vector<int>&) - The second input vector.
 * @return (std::vector<int>) - A vector containing the common elements,
 *                             with each element appearing the minimum number of
 *                             times it appears in either input vector.
 * @throws std::invalid_argument - If either input vector is empty.
 */
std::vector<int> wspolne(const std::vector<int>& arr1, const std::vector<int>& arr2);

#endif //LISTA_1_ZAD2_H