#include "Sifter.h"
#include "Logger.h"
#include <iostream>
#include <string>

int main(int argc, char* argv[]) {
    std::cout << "Welcome to BugSifter CLI Tool!\n";

    if (argc < 2) {
        std::cout << "Usage: ./bugsifter <filename>\n";
        return 1;
    }

    Sifter sifter;
    sifter.loadFile(argv[1]);

    auto result = sifter.removeVowels();
    for (const auto& line : result) {
        std::cout << line << "\n";
    }

    sifter.doStuff();
    gLogger.log("Finished processing file.");

    return 0;
}