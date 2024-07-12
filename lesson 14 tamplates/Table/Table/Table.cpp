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

    // копирование
    table(const table& other) : rows(other.rows), cols(other.cols) {
        data = new T * [rows];
        for (int i = 0; i < rows; ++i) {
            data[i] = new T[cols];
            for (int j = 0; j < cols; ++j) {
                data[i][j] = other.data[i][j];
            }
        }
    }
    // присвоение
    table& operator=(const table& other) {
        if (this != &other) {
            for (int i = 0; i < rows; ++i) {
                delete[] data[i];
            }
            delete[] data;
            rows = other.rows;
            cols = other.cols;
            data = new T * [rows];
            for (int i = 0; i < rows; ++i) {
                data[i] = new T[cols];
                for (int j = 0; j < cols; ++j) {
                    data[i][j] = other.data[i][j];
                }
            }
        }
        return *this;
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
    system("chcp 1251");
    auto test = table<int>(2, 3);
    test[0][0] = 4;
    std::cout << test[0][0] << std::endl;
    std::pair<int, int> size = test.Size();
    std::cout << "Размер таблицы: " << size.first << "x" << size.second << std::endl;
    auto test2 = test;
    //test2[0][0] = 5;
    std::cout << test2[0][0] << std::endl;
    table<double> t1(2, 3);
    table<double> t3(t1);
    size = t3.Size();
    std::cout << "Размер таблицы: " << size.first << "x" << size.second << std::endl;
    return 0;

}