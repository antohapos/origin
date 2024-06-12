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
    void add_element(int a) {
        if (count >= size) { throw std::exception("Выход за пределы массива ");}
        arr[count] = a;
        count++;
    };
    int get_element(int i) {
        return arr[i];
    }
    ~smart_array() {
        //std::cout << "delete arr";
        delete arr; 
    }
};
int main() {
    
    try {
        smart_array arr(4);
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