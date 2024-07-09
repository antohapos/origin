#include <iostream>
template <typename T>
class table {
private:
    T** data;
    int rows;
    int cols;
public:
    table(int r, int c) : rows(r), cols(c) {
        data = new T * [rows];
        for (int i = 0; i < rows; ++i) {
            data[i] = new T[cols];
        }
    }

    ~table() {
        for (int i = 0; i < rows; ++i) {
            delete[] data[i];
        }
        delete[] data;
    }

    T* operator[](int row) {
        return data[row];
    }

    const T* operator[](int row) const {
        return data[row];
    }

    std::pair<int, int> Size() const {
        return std::make_pair(rows, cols);
    }
    
};

int main() {
    auto test = table<int>(2, 3);
    test[0][0] = 4;
    std::cout << test[0][0];
    std::pair<int, int> size = test.Size();
    std::cout << "Table size: " << size.first << "x" << size.second << std::endl;
    return 0;
}