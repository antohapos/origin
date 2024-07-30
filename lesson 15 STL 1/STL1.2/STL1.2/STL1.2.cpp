#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
int main() {
    int count;
    std::cin >> count;
    std::vector<int> numbers(count);
    for (int i = 0; i < count; ++i) {
        std::cin >> numbers[i];
    }
    std::cout << std::endl;
    std::set<int> noDupNumbers(numbers.begin(), numbers.end());
    std::vector<int> sortedNoDupNumbers(noDupNumbers.begin(), noDupNumbers.end());
    std::sort(sortedNoDupNumbers.begin(), sortedNoDupNumbers.end(), std::greater<int>());
    for (int number : sortedNoDupNumbers) {
        std::cout << number << std::endl;
    }
    return 0;
}