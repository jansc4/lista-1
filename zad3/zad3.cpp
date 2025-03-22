/*
 * @author Jan Nowak
 */

#include "zad3.h"


vector<vector<char>> podzbiory(const vector<char>& x) {

    if (x.empty()) {
        throw invalid_argument("Set can not be empty");
    }


    int vectorSize = x.size();
    int subsetsNumber = 1 << vectorSize;        //2^n

    vector<vector<char>> subsets;

    for (int mask = 0; mask < subsetsNumber; mask++){
        vector<char> subset;
        for (int i = 0; i < vectorSize; i++){
            if (mask & (1<<i)){     // AND logiczne dla aktualnej maski i położenia 'i'
                subset.push_back(x.at(i));      // dodaj char dla którego maska = 1 do wektora
            }
        }
        subsets.push_back(subset);
    }
    return subsets;

}

void printSubsets(const vector<vector<char>>& subsets) {
    for (const auto& subset : subsets) {
        cout << "{ ";
        for (char elem : subset) {
            cout << elem << " ";
        }
        cout << "}\n";
    }
}