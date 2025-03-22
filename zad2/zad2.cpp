/*
 * @author Jan Nowak
 */


#include "zad2.h"

using namespace std;

vector<int> wspolne(const vector<int>& arr1, const vector<int>& arr2){
    if (arr1.empty() || arr2.empty()) {
        throw invalid_argument("Vectors can not be empty");
    }

    map<int, int> arr1map;
    map<int, int> arr2map;
    vector<int> result;


    for (int i : arr1){     //liczymy wystąpienia elementów w pierwszym wektorze
        arr1map[i]++;
    }

    for (int i : arr2){    //liczymy wystąpienia elementów w drugim wektorze
        arr2map[i]++;
    }

    for (const auto &pair : arr1map) {      //porównujemy ilosci wystoąpień
        int value = pair.first;     //element w w1
        if (arr2map.count(value)) {     // czy występuje w w2
            int minCount = min(arr1map[value], arr2map[value]);     // minimalna licza wystąpień z w1 i w2
            for (int j = 0; j < minCount; j++) {       //wrzucamy do result tyle razy ile jest min
                result.push_back(value);
            }
        }
    }

    return result;
}
