#include <iostream>
#include <vector>


template <typename T>
T square(T x) {
    return x * x;
}

template <typename T>
std::vector<T> square(const std::vector<T>& v) {
    std::vector<T> squared_v;
    for (const auto& element : v) {
        squared_v.push_back(element * element);
    }
    return squared_v;
}


int main() {
    int a = 4;
    std::cout << "[in]: " << a << std::endl;

    int a2 = square(a);
    std::cout << "[out]: " << a2 << std::endl;

    std::vector<int> v = { -1, 4, 8, };
    std::cout << "[in]: ";
    for (int i = 0; i < v.size(); i++) {
        if (i < v.size() - 1)std::cout << v[i] << ", ";
        else std::cout << v[i] << std::endl;
    }

    std::vector<int> v2 = square(v);
    std::cout << "[out]: ";
    for (int i = 0; i < v2.size(); i++) {
        if (i < v2.size() - 1)std::cout << v2[i] << ", ";
        else std::cout << v2[i] << std::endl;
    }
}