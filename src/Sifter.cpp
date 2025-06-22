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

std::string Sifter::removeVowels(const std::string& input) {
    std::string output;
    for (char c : input) {
        // Remove both lowercase and uppercase vowels
        if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' &&
            c != 'A' && c != 'E' && c != 'I' && c != 'O' && c != 'U') {
            output += c;
        }
    }
    return output;
}

void Sifter::doStuff() {
    int x = 5; 
}
