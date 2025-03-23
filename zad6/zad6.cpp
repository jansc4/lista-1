/*
 * @author Jan Nowak
 * https://www.w3schools.com/cpp/cpp_constructors.asp
 * https://pl.wikipedia.org/wiki/Aminokwasy_białkowe
 *
 */


#include <iostream>
#include "zad6.h"

using namespace std;


Protein::Protein(vector<char> &DNA53) : DNA53(DNA53) {}


const vector<char> &Protein::getDna53() const {
    return DNA53;
}

void Protein::setDna53(const vector<char> &dna53) {
    DNA53 = dna53;
}

const vector<char> &Protein::getDna35() const {
    return DNA35;
}

void Protein::setDna35(const vector<char> &dna35) {
    DNA35 = dna35;
}

const vector<char> &Protein::getMrna() const {
    return mRNA;
}

void Protein::setMrna(const vector<char> &mRna) {
    mRNA = mRna;
}

const vector<char> &Protein::getProteinSequence() const {
    return proteinSequence;
}

void Protein::setProteinSequence(const vector<char> &proteinSequence) {
    Protein::proteinSequence = proteinSequence;
}

void Protein::komplement() {
    if (DNA53.empty()) {
        throw invalid_argument("Vectors can not be empty");
    }
    DNA35.clear();
    for (char nuclo : DNA53){
        if (nuclo == 'A'){
            DNA35.push_back('T');
        } else if (nuclo == 'T'){
            DNA35.push_back('A');
        } else if (nuclo == 'C'){
            DNA35.push_back('G');
        } else if (nuclo == 'G'){
            DNA35.push_back('C');
        }
    }
}

void Protein::transkrybuj() {
    if (DNA35.empty()) {
        throw invalid_argument("Vectors can not be empty");
    }
    mRNA.clear();
    for (char nuclo : DNA35){
        if (nuclo == 'A'){
            mRNA.push_back('U');
        } else if (nuclo == 'T'){
            mRNA.push_back('A');
        } else if (nuclo == 'C'){
            mRNA.push_back('G');
        } else if (nuclo == 'G'){
            mRNA.push_back('C');
        }
    }
}

void Protein::transluj() {
    if (mRNA.size() % 3 != 0 || mRNA.empty()) {
        throw invalid_argument("mRNA sequence length must be a multiple of 3.");
    }

    // Mapa kodonów
    map<string, char> codonTable = {
            {"GCU", 'A'}, {"GCC", 'A'}, {"GCA", 'A'}, {"GCG", 'A'},
            {"UGU", 'C'}, {"UGC", 'C'},
            {"GAU", 'D'}, {"GAC", 'D'},
            {"GAA", 'E'}, {"GAG", 'E'},
            {"UUU", 'F'}, {"UUC", 'F'},
            {"GGU", 'G'}, {"GGC", 'G'}, {"GGA", 'G'}, {"GGG", 'G'},
            {"CAU", 'H'}, {"CAC", 'H'},
            {"AUU", 'I'}, {"AUC", 'I'}, {"AUA", 'I'},
            {"AAA", 'K'}, {"AAG", 'K'},
            {"UUA", 'L'}, {"UUG", 'L'}, {"CUU", 'L'}, {"CUC", 'L'}, {"CUA", 'L'}, {"CUG", 'L'},
            {"AUG", 'M'},               // Metionina (start)
            {"AAU", 'N'}, {"AAC", 'N'},
            {"UAG", 'O'},
            {"CCU", 'P'}, {"CCC", 'P'}, {"CCA", 'P'}, {"CCG", 'P'},
            {"CAA", 'Q'}, {"CAG", 'Q'},
            {"CGU", 'R'}, {"CGC", 'R'}, {"CGA", 'R'}, {"CGG", 'R'}, {"AGA", 'R'}, {"AGG", 'R'},
            {"UCU", 'S'}, {"UCC", 'S'}, {"UCA", 'S'}, {"UCG", 'S'}, {"AGU", 'S'}, {"AGC", 'S'},
            {"ACU", 'T'}, {"ACC", 'T'}, {"ACA", 'T'}, {"ACG", 'T'},
            {"UGA", 'U'},
            {"GUU", 'V'}, {"GUC", 'V'}, {"GUA", 'V'}, {"GUG", 'V'},
            {"UGG", 'W'},
            {"UAU", 'Y'}, {"UAC", 'Y'},
            {"UGA", '*'}, {"UAA", '*'}, {"UAG", '*'} // Kodony STOP
    };

    proteinSequence.clear();

    for (size_t i = 0; i < mRNA.size(); i += 3) {
        string codon = {mRNA[i], mRNA[i+1], mRNA[i+2]};

        if (codonTable.find(codon) != codonTable.end()) {
            char aminoAcid = codonTable[codon];
            if (aminoAcid == '*') break; // STOP → kończ translację
            proteinSequence.push_back(aminoAcid);
        } else {
            throw invalid_argument("Invalid codon found: " + codon);
        }
    }
}
void Protein::printVector(const vector<char> &data) {
    for (char i : data){
        cout << i;
    }
}


