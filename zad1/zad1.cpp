/*
 * @author Jan Nowak
 */

#include "zad1.h"
#include <cmath>
#include <stdexcept>

using namespace std;

// Function definition
double heron(double a, double b, double c) {
    if (check(a, b, c)) {
        double p = (a + b + c) / 2.0;
        return sqrt(p * (p - a) * (p - b) * (p - c));
    } else {
        throw invalid_argument("Invalid triangle sides");
    }
}

// Function definition
bool check(double a, double b, double c) {
    return (a > 0 && b > 0 && c > 0) &&
           (a + b > c) && (a + c > b) && (b + c > a);
}
