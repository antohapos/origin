
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
        if (count >= size) { throw std::exception("Выход за пределы массива "); }
        arr[count] = a;
        count++;
    };
    int get_element(int i) {
        return arr[i];
    }
    void new_arr(smart_array &copyed_arr) {
        delete arr;
        arr = nullptr;
        size = copyed_arr.get_size();
        count = 0;
        arr = new int[size] {};
        for (int i = 0; i < size; i++) {
            arr[i] = copyed_arr.get_element(i);
        }
    }
    int get_size() {
        return size;
    }
    ~smart_array() {
        std::cout << "delete arr" << std::endl;
        delete arr;
        std::cout << "delete arr" << std::endl;
    }
};
 
int main()
{
    setlocale(LC_ALL, "Russian");
    try {
        smart_array arr(3);
        arr.add_element(1);
        arr.add_element(4);
        arr.add_element(155);

        smart_array new_array(2);
        new_array.add_element(44);
        new_array.add_element(34);
        std::cout << arr.get_size() << std::endl;
        for (int i = 0; i < arr.get_size(); i++) {
            std::cout << arr.get_element(i) << "\t";
        }
        std::cout << std::endl;
        arr.new_arr(new_array);
        std::cout << arr.get_size() << std::endl;
        for (int i = 0; i < arr.get_size(); i++) {
            std::cout << arr.get_element(i) << "\t";
        }
        std::cout << std::endl;
        arr.add_element(1);
        arr.add_element(4);
 
    }
    catch (const std::exception& ex) {
        std::cout << ex.what() << std::endl;
    }
    
}