#include "Utils.h"
#include <sstream>
#include <cstdlib>
#include <iostream>

namespace Utils {

std::vector<std::string> split(const std::string& str, char delimiter) {
    std::vector<std::string> tokens;
    std::stringstream ss(str);
    std::string item;
    while (std::getline(ss, item, delimiter)) {
        tokens.push_back(item);
    }
    return tokens;
}

bool containsVowel(const std::string& word) {
    for (char c : word) {
        if (std::string("aeiou").find(c) != std::string::npos)
            return true;
    }
    return false;
}

void clearScreen() {
    system("clear"); 
}

}