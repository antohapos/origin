#include <iostream>
#include <vector>
#include <algorithm>

void print(const std::vector<int>& v) {
    for (int i : v) {
        if (i != v.back()) std::cout << i << " ";
        else std::cout << i << std::endl;
    }
}

void sortingFoo(std::vector<int>& v) {
    std::sort(v.begin(), v.end());
    std::vector<int>::iterator it = std::unique(v.begin(), v.end());
    v.resize(std::distance(v.begin(), it));
    
}

int main() {
    std::vector<int> v = { 1, 1, 2, 5, 6, 1, 2, 4 };
    print(v);
    sortingFoo(v);
    print(v);
}