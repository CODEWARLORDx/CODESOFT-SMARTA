#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

int countWords(const std::string &text) {
    std::stringstream ss(text);
    std::string word;
    int count = 0;
    
    while (ss >> word) {
        count++;
    }
    
    return count;
}

int main() {
    std::string filename;
    
    std::cout << "Enter the filename: ";
    std::cin >> filename;
    
    std::ifstream inputFile(filename.c_str());  // Use .c_str() to convert the string to a C-style string
    
    if (!inputFile) {
        std::cerr << "Error opening file." << std::endl;
        return 1;
    }
    
    std::stringstream buffer;
    buffer << inputFile.rdbuf();
    std::string fileContents = buffer.str();
    
    inputFile.close();
    
    int wordCount = countWords(fileContents);
    
    std::cout << "Total word count: " << wordCount << std::endl;
    
    return 0;
}

