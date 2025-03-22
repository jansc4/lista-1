/*
 * @author Jan Nowak
 * https://www.w3schools.com/cpp/cpp_constructors.asp
 */

#include "zad6.h"

using namespace std;


Protein::Protein(std::string DNA, std::string RNA, std::string mRNA) {
    DNA = DNA;
    RNA = RNA;
    mRNA = mRNA;
}

string Protein::komplement() {

}

string Protein::transkrybuj() {

}

string Protein::transluj() {

}

string Protein::getDNA() {
    return DNA;
}

string Protein::getRNA() {
    return RNA;
}

string Protein::getmRNA() {
    return mRNA;
}

void Protein::setDNA(std::string DNA) {
    DNA = DNA;
}

void Protein::setRNA(std::string RNA) {
    RNA = RNA;
}

void Protein::setmRNA(std::string mRNA) {
    mRNA = mRNA;
}