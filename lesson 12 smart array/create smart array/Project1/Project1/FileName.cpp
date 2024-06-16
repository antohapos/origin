#include <iostream>

class smart_array {
    int* arr;
    int size;
    int count;
public:
    smart_array(int size) {
        this->size = size;
        arr = new int[size] {};
        count = 0;
    }
    void add_element(int value) {
        if (count >= size) {
            throw std::exception("Выход за пределы размера массива");
        }
        arr[count] = value;
        count++;
    };
    int get_element(int index) {
        if (index < 0 || index >= count) {
            throw std::exception("Выход за пределы заполнения массива");
        }
        return arr[index];
    }
    ~smart_array() {
        //std::cout << "delete arr";
        delete arr; 
    }
};
int main() {
    system("chcp 1251");
    try {
        smart_array arr(5);
        arr.add_element(1);
        arr.add_element(4);
        arr.add_element(155);
        arr.add_element(14);
        arr.add_element(15);
        std::cout << arr.get_element(4) << std::endl;
    }
    catch (const std::exception& ex) {
        std::cout << ex.what() << std::endl;
    }
    
}