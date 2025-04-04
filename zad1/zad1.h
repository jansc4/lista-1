/*
 * @author Jan Nowak
 */

#ifndef LISTA_1_ZAD1_H
#define LISTA_1_ZAD1_H


/*
 * Checks if the given side lengths form a valid triangle.
 *
 * @param a (double) - Length of the first side.
 * @param b (double) - Length of the second side.
 * @param c (double) - Length of the third side.
 * @return (bool) - True if the side lengths form a valid triangle, false otherwise.
 */
bool check(double a, double b, double c);


/*
 * Calculates the area of a triangle using Heron's formula.
 *
 * @param a (double) - Length of the first side.
 * @param b (double) - Length of the second side.
 * @param c (double) - Length of the third side.
 * @return (double) - The area of the triangle.
 * @throws invalid_argument - If the side lengths do not form a valid triangle.
 */
double heron(double a, double b, double c);

#endif //LISTA_1_ZAD1_H
