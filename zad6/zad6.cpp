/*
 * @author Jan Nowak
 * https://www.w3schools.com/cpp/cpp_constructors.asp
 * https://pl.wikipedia.org/wiki/Aminokwasy_białkowe
 *
 */


#include "zad6.h"
#include <iostream>

vector<char> komplement(const vector<char> &DNA53) {
    if (DNA53.empty()) throw invalid_argument("DNA53 is empty");

    vector<char> DNA35;
    for (char nuclo : DNA53) {
        switch (nuclo) {
            case 'A': DNA35.push_back('T'); break;
            case 'T': DNA35.push_back('A'); break;
            case 'C': DNA35.push_back('G'); break;
            case 'G': DNA35.push_back('C'); break;
            default: throw invalid_argument("Invalid nucleotide in DNA53");
        }
    }
    return DNA35;
}

vector<char> transkrybuj(const vector<char> &DNA35) {
    if (DNA35.empty()) throw invalid_argument("DNA35 is empty");

    vector<char> mRNA;
    for (char nuclo : DNA35) {
        switch (nuclo) {
            case 'A': mRNA.push_back('U'); break;
            case 'T': mRNA.push_back('A'); break;
            case 'C': mRNA.push_back('G'); break;
            case 'G': mRNA.push_back('C'); break;
            default: throw invalid_argument("Invalid nucleotide in DNA35");
        }
    }
    return mRNA;
}

vector<char> transluj(const vector<char> &mRNA) {
    if (mRNA.empty() || mRNA.size() % 3 != 0)
        throw invalid_argument("mRNA must not be empty and its length must be a multiple of 3");

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
            {"AUG", 'M'},
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
            {"UGA", '*'}, {"UAA", '*'}, {"UAG", '*'}
    };

    vector<char> proteinSequence;
    for (size_t i = 0; i < mRNA.size(); i += 3) {
        string codon = {mRNA[i], mRNA[i + 1], mRNA[i + 2]};
        if (codonTable.find(codon) != codonTable.end()) {
            char aminoAcid = codonTable[codon];
            if (aminoAcid == '*') break;
            proteinSequence.push_back(aminoAcid);
        } else {
            throw invalid_argument("Invalid codon: " + codon);
        }
    }

    return proteinSequence;
}

void printVector(const vector<char> &data) {
    for (char c : data) cout << c;
}
