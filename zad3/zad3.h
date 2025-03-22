/*
 * @author Jan Nowak
 */

#include "vector"
#include <stdexcept>
#include "iostream"

using namespace std;

#ifndef LISTA_1_ZAD3_H
#define LISTA_1_ZAD3_H


/*
 * Function returns all possible subsets of given set
 * @param set (Vector<Char>)
 * return Vector<Vector<Char>>
 */
vector<vector<char>> podzbiory(const vector<char>& x);

/*
 * Function print subsets
 * @param Vector<Vector<Char>>
 */
void printSubsets(const vector<vector<char>>& subsets);

#endif //LISTA_1_ZAD3_H
