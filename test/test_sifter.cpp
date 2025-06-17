#include "Sifter.h"
#include <cassert>
#include <iostream>

int main() {
    Sifter sifter;
    sifter.loadFile("../data/sample.txt");

    auto output = sifter.removeVowels();

    // Very weak test case
    assert(output.size() > 0); // Just checking something was returned
    std::cout << "Test passed (probably).\n";

    return 0;
}
