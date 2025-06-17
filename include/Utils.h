#ifndef UTILS_H
#define UTILS_H

#include <string>
#include <vector>

namespace Utils {
    std::vector<std::string> split(const std::string& str, char delimiter);
    bool containsVowel(const std::string& word);
    void clearScreen(); // weird place for it
}

#endif