#include <iostream>
#include <stdexcept>


template <typename T>
class MyVector {
private:
    T* data;
    int Capacity;
    int Size;
public:
    MyVector() {
        Capacity = 10;
        data = new T[Capacity];
        Size = 0;
    }
    T& at(int index) {
        if (index < 0 || index >= Size) {
            throw std::out_of_range("Index out of bounds");
        }
        return data[index];
    }
    void push_back(T value) {
        if (Size == Capacity) {
            Capacity *= 2;
            T* newData = new T[Capacity];
            for (int i = 0; i < Size; i++) {
                newData[i] = data[i];
            }
            delete[] data;
            data = newData;
        }
        data[Size++] = value;
    }
    int size() const {
        return Size;
    }
    int capacity() const {
        return Capacity;
    }
    ~MyVector() {
        delete[] data;
    }
};

int main() {
    MyVector<int> vec;

    for (int i = 0; i < 15; i++) {
        vec.push_back(i);
    }

    std::cout << "Size: " << vec.size() << std::endl;
    std::cout << "Capacity: " << vec.capacity() << std::endl;
    std::cout << "Element at index 5: " << vec.at(5) << std::endl;

    return 0;
}