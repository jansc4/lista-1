cmake_minimum_required(VERSION 3.28)
project(lista_1)

set(CMAKE_CXX_STANDARD 17)

include(FetchContent)
FetchContent_Declare(
        Catch2
        GIT_REPOSITORY https://github.com/catchorg/Catch2.git
        GIT_TAG v3.5.2 # sprawdź najnowszą wersję na GitHubie
)
FetchContent_MakeAvailable(Catch2)
#list(APPEND CMAKE_MODULE_PATH ${catch2_SOURCE_DIR}/extras)


enable_testing()

# Dodajemy podprojekty
add_subdirectory(zad1)
add_subdirectory(zad2)
add_subdirectory(zad3)
add_subdirectory(zad4)
add_subdirectory(zad5)
add_subdirectory(zad6)


