/*
 * @author Jan Nowak
 * https://github.com/catchorg/Catch2
 * https://www.jetbrains.com/help/clion/unit-testing-tutorial.html#clion-integrations
 * https://github.com/catchorg/Catch2/blob/devel/docs/cmake-integration.md#installing-catch2-from-git-repository
 */

#define CATCH_CONFIG_MAIN  // Definiuje główną funkcję testową w Catch2
#include "catch2/catch_all.hpp"
#include "zad6.h"

TEST_CASE("Test komplementowania DNA", "[komplement]") {
    vector<char> dna53 = {'A', 'T', 'G', 'C'};
    vector<char> expected35 = {'T', 'A', 'C', 'G'};
    REQUIRE(komplement(dna53) == expected35);
}

TEST_CASE("Test transkrypcji DNA do mRNA", "[transkrybuj]") {
    vector<char> dna35 = {'T', 'A', 'C', 'G'};
    vector<char> expected_mrna = {'A', 'U', 'G', 'C'};
    REQUIRE(transkrybuj(dna35) == expected_mrna);
}

TEST_CASE("Test translacji mRNA do białka", "[transluj]") {
    vector<char> mrna = {'A', 'U', 'G', 'G', 'C', 'U'}; // AUG GCU → M A
    vector<char> expected_protein = {'M', 'A'};
    REQUIRE(transluj(mrna) == expected_protein);
}

TEST_CASE("Test translacji - zatrzymanie na kodonie STOP", "[transluj]") {
    vector<char> mrna = {'A', 'U', 'G', 'U', 'A', 'A', 'G', 'C', 'U'}; // AUG UAA → M (STOP)
    vector<char> expected_protein = {'M'};
    REQUIRE(transluj(mrna) == expected_protein);
}

TEST_CASE("Test translacji - nieprawidłowy kodon", "[transluj]") {
    vector<char> mrna = {'A', 'U', 'G', 'X', 'X', 'X'}; // Zawiera nieprawidłowy kodon
    REQUIRE_THROWS_AS(transluj(mrna), invalid_argument);
}
