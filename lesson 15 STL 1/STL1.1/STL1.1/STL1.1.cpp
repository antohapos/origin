#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>

int main() {
    std::map<char, int> CharCountMap;
    std::string input;
    std::cout << "Enter a string: ";
    getline(std::cin, input);
    //std::cout << input;
    //std::string S = "Hello World";
    for (char c : input) {
        CharCountMap[c]++;
    }
    /*
    std::cout << "CharCountMap" << std::endl;
    for (const auto& pair : CharCountMap) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }
    */
    std::multimap<int, char> CharCountMap2;
    for (const auto& pair : CharCountMap) {
        CharCountMap2.insert(std::make_pair(pair.second, pair.first));
    }
    /*
    std::cout << "CharCountMap2" << std::endl;
    for (const auto& pair : CharCountMap2) {
        std::cout << pair.second << ": " << pair.first << std::endl;
    }
    */
    std::vector<std::pair<int, char>> SortedCharCountMap2(CharCountMap2.begin(), CharCountMap2.end());
    std::sort(SortedCharCountMap2.begin(), SortedCharCountMap2.end(), [](const std::pair<int, char>& a, const std::pair<int, char>& b) {
        return a.first > b.first;
        });
    std::cout << "SortedCharCountMap2" << std::endl;
    for (const auto& pair : SortedCharCountMap2) {
        std::cout << pair.second << ": " << pair.first << std::endl;
    }
}