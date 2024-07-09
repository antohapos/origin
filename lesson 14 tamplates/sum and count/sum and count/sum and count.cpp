#include <iostream>

struct DivisibleBy3Functor {
    int sum;
    int count;
    DivisibleBy3Functor() : sum(0), count(0) {}
    void operator()(int num) {
        if (num % 3 == 0) {
            sum += num;
            count++;
        }
    }
    int get_sum() const {
        return sum;
    }
    int get_count() const {
        return count;
    }
};

int main() {
    system("chcp 1251");
    int num;
    DivisibleBy3Functor functor;
    std::cout << "Введите числа (0 для завершения ввода): " << std::endl;
    while (std::cin >> num && num != 0) {
        functor(num);
    }
    std::cout << "get_sum() = " << functor.get_sum() << std::endl;
    std::cout << "get_count() = " << functor.get_count() << std::endl;
    return 0;
}
