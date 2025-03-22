/*
 * @author Jan Nowak
 * https://www.w3schools.com/cpp/cpp_vectors.asp
 */

#include <iostream>
#include "zad2.h"


using namespace std;

int main(){
    vector<int> tab1 = {1,1,2,3,3,3,5,5,5,5};
    vector<int> tab2 = {1,2,2,3,3,4,5,5,5};
    try {
        vector<int> result = wspolne(tab1, tab2);
        cout << "Common parts: ";
        for (int num : result) {
            cout << num << " ";
        }
    } catch (const exception& e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}