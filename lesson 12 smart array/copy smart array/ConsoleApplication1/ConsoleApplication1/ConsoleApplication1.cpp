
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

    int get_size() { return n; }


    void copy(smart_array new_arr) {
        n = (new_arr.get_size());
        delete arr;
        arr = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = new_arr.get_element(i);
        }
    }

    ~smart_array() { delete arr; }
};

int main()
{
    smart_array arr(5);
    arr.add_element(1);
    arr.add_element(4);
    arr.add_element(155);

    smart_array new_array(2);
    new_array.add_element(44);
    new_array.add_element(34);

    arr.copy(new_array);
}