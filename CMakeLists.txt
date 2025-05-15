cmake_minimum_required(VERSION 3.31)
project(CSES)

set(CMAKE_CXX_STANDARD 20)

add_executable(CSES main.cpp
        IntroductoryProblems/WeirdAlgorithm.cpp
        IntroductoryProblems/MissingNumber.cpp
        IntroductoryProblems/Repetitions.cpp
        IntroductoryProblems/Permutations.cpp
        IntroductoryProblems/TwoSets.cpp
        IntroductoryProblems/BitString.cpp
        IntroductoryProblems/TrailingZeros.cpp)
