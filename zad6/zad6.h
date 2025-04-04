/*
 * @author Jan Nowak
 * https://www.w3schools.com/cpp/cpp_constructors.asp
 */

#ifndef LISTA_1_ZAD6_H
#define LISTA_1_ZAD6_H

#include <vector>
#include <stdexcept>
#include <map>
#include <string>

using namespace std;

/**
 * Tworzy nić komplementarną DNA (3'->5') na podstawie nici wejściowej (5'->3').
 * @param DNA53 - wektor nukleotydów nici DNA w kierunku 5'->3'
 * @return wektor nukleotydów nici DNA w kierunku 3'->5'
 */
vector<char> komplement(const vector<char> &DNA53);

/**
 * Transkrybuje nić DNA (3'->5') do mRNA.
 * @param DNA35 - wektor nukleotydów nici DNA w kierunku 3'->5'
 * @return wektor nukleotydów mRNA
 */
vector<char> transkrybuj(const vector<char> &DNA35);

/**
 * Translacja sekwencji mRNA do sekwencji aminokwasów (łańcuch białkowy).
 * @param mRNA - wektor nukleotydów mRNA
 * @return wektor aminokwasów reprezentujących sekwencję białka
 * @throws invalid_argument jeśli długość mRNA nie jest podzielna przez 3 lub zawiera niepoprawny kodon
 */
vector<char> transluj(const vector<char> &mRNA);

/**
 * Wypisuje zawartość wektora znaków na standardowe wyjście.
 * @param data - wektor znaków do wypisania
 */
void printVector(const vector<char> &data);

#endif //LISTA_1_ZAD6_H

