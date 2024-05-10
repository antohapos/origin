#include <iostream>

void print_dynamic_array(int* arr, int logical_size, int actual_size) {
    for (int i = 0; i < actual_size; ++i) {
        if (i < logical_size) {
            std::cout << arr[i] << " ";
        }
        else {
            std::cout << "_ ";
        }
    }
    std::cout << std::endl;
}
void create_dynamic_array(int* arr, int logical_size, int actual_size) {
    int* new_arr = new int[actual_size];
    for (int i = 0; i < logical_size; ++i) {
        new_arr[i] = arr[i];
    }
    arr = new_arr;
}


int main() {
    system("chcp 1251");
    int actual_size = 0;
    std::cout << "Введите фактичеcкий размер массива: ";
    std::cin >> actual_size;
    int logical_size = 0;
    std::cout << "Введите логический размер массива: ";
    std::cin >> logical_size;
    int* arr = new int[actual_size] {};
    for (int i = 0; i < logical_size; i++) {
        std::cout << "Введите arr[" << i << "]: ";
        std::cin >> arr[i];
    }
    std::cout << "Динамический массив: ";
    print_dynamic_array(arr, logical_size, actual_size);
    int add = 0;
    while (true) {
        std::cout << "Введите элемент для добавления ";
        std::cin >> add;
        if (add == 0) {
            break;
        }
        std::cout << add << std::endl;
        if (logical_size < actual_size) {
            arr[logical_size] = add;
            ++logical_size;

        }
        else {
            actual_size *= 2;
            create_dynamic_array(arr, logical_size, actual_size);
            arr[logical_size] = add;
            logical_size++;
        }
        std::cout << "Динамический массив: ";
        print_dynamic_array(arr, logical_size, actual_size);
    }
    std::cout << "Спасибо, ваш массив: ";
    print_dynamic_array(arr, logical_size, actual_size);
}
