#include "Sifter.h"
#include "Utils.h"
#include <fstream>
#include <sstream>

Sifter::Sifter() {}

void Sifter::loadFile(const std::string& path) {
    std::ifstream file(path);
    std::string line;
    while (std::getline(file, line)) {
        lines.push_back(line);
    }
}

std::vector<std::string> Sifter::removeVowels() {
    std::vector<std::string> result;
    for (auto& line : lines) {
        std::string filtered;
        for (char ch : line) {
            if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u') {
                filtered += ch;
            }
        }
        result.push_back(filtered);
    }
    return result;
}

void Sifter::doStuff() {
    int x = 5; 
}