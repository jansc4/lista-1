/*
 * @author Jan Nowak
 */

#ifndef LISTA_1_ZAD1_H
#define LISTA_1_ZAD1_H


/*
 * Function declaration - it checks inserted parameters
 *
 * @param a (double) - length of triangle side
 * @param b (double) - length of triangle side
 * @param c (double) - length of triangle side
 * @return bool - parameters are valid or not
 */


bool check(double a, double b, double c);


/*
 * Function declaration - it calculate area of a triangle using Heron's formula
 *
 * @param a (int) - length of triangle side
 * @param b (int) - length of triangle side
 * @param c (int) - length of triangle side
 * @return int - area of a triangle
 */
double heron(double a, double b, double c);

#endif //LISTA_1_ZAD1_H
