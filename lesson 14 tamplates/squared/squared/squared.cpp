#include <iostream>
#include <vector>


template <typename T>
T square(T x) {
    return x * x;
}

template <typename T>
T square(const std::vector<T>& v, int i) {
    return v[i] * v[i];
}

int main() {
    int a = 4;
    std::vector<int> v = { -1, 4, 8, };

    std::cout << "[in]: " << a << std::endl;
    std::cout << "[out]: " << square(a) << std::endl;

    std::cout << "[in]: ";
    for (int i = 0; i < v.size(); i++) {
        if (i < v.size() - 1)std::cout << v[i] << ", ";
        else std::cout << v[i] << std::endl;
    }

    std::cout << "[out]: ";
    for (int i = 0; i < v.size(); i++) {
        if (i < v.size() - 1) { std::cout << square(v, i) << ", "; }
        else std::cout << square(v, i);
    }
}