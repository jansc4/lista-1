/*
 * @author Jan Nowak
 * https://github.com/catchorg/Catch2
 * https://www.jetbrains.com/help/clion/unit-testing-tutorial.html#clion-integrations
 * https://github.com/catchorg/Catch2/blob/devel/docs/cmake-integration.md#installing-catch2-from-git-repository
 * chatGPT - pomoc w nauce
 */

#define CATCH_CONFIG_MAIN  // Definiuje główną funkcję testową w Catch2
#include "catch2/catch_all.hpp"
#include "zad6.h"

TEST_CASE("Test konstruktorów i dostępu do danych", "[Protein]") {
    vector<char> dna = {'A', 'T', 'G', 'C'};
    Protein protein(dna);
    REQUIRE(protein.getDna53() == dna);
}

TEST_CASE("Test komplementowania DNA", "[Protein]") {
    vector<char> dna = {'A', 'T', 'G', 'C'};
    Protein protein(dna);
    protein.komplement();
    REQUIRE(protein.getDna35() == vector<char>{'T', 'A', 'C', 'G'});
}

TEST_CASE("Test transkrypcji DNA do mRNA", "[Protein]") {
    vector<char> dna = {'A', 'T', 'G', 'C'};
    Protein protein(dna);
    protein.komplement();
    protein.transkrybuj();
    REQUIRE(protein.getMrna() == vector<char>{'A', 'U', 'G', 'C'});
}


