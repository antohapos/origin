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
        if (size == count) {
            throw std::out_of_range("выход за пределы массива при добавлении");
        }
        arr[count] = value;
        count++;
    }

    smart_array& operator=(const smart_array& other) {
       // std::cout << "перегрузка оператора = " ;
        if (this != &other) {
            delete[] arr;
            count = other.count;
            size = other.size;
            arr = new int[count];
            for (int i = 0; i < count; ++i) {
                arr[i] = other.arr[i];
            }
        }
        return *this;
    }

    ~smart_array() {
        delete[] arr;
    }

    void print() {
        for (int i = 0; i < count ; ++i) {
            std::cout << arr[i]<< " ";
        }
        std::cout << std::endl;
    }
};

int main() {
    system("chcp 1251");
    try {
        smart_array arr(5);
        arr.add_element(1);
        arr.add_element(4);
        arr.add_element(155);

        smart_array new_array(2);
        new_array.add_element(44);
        new_array.add_element(34);

        std::cout << "массив до копирования: ";
        arr.print();

        arr = new_array; // копирование массива

        std::cout << "массив после копирования: ";
        arr.print();

        std::cout << "массив который копировали: ";
        new_array.print();

        return 0;
    }
    catch (const std::exception& ex) {
        std::cout << ex.what() << std::endl;
    }
}