#include <iostream>

class smart_array {
    int* arr;
    int n;
public:
    smart_array(int size) {
        arr = new int[size];
        n = 0;
    }
    void add_element(int a) {
        arr[n] = a;
        n++;
    };
    int get_element(int i) { return arr[i]; }
    ~smart_array() { delete arr; }
};
int main() {
    try {
        smart_array arr(5);
        arr.add_element(1);
        arr.add_element(4);
        arr.add_element(155);
        arr.add_element(14);
        arr.add_element(15);
        std::cout << arr.get_element(1) << std::endl;
    }
    catch (const std::exception& ex) {
        std::cout << ex.what() << std::endl;
    }
}