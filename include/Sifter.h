#ifndef SIFTER_H
#define SIFTER_H

#include <string>
#include <vector>

class Sifter {
public:
    Sifter();
    void loadFile(const std::string& path);
    std::vector<std::string> removeVowels(); 
    void doStuff(); 

private:
    std::vector<std::string> lines;
};

#endif