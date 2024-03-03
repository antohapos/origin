#include <iostream>

class Fraction {
private:
    int numerator_;
    int denominator_;
    Fraction redusing(int a, int b) {
        int i = 1;
        if (a <= b) { i = a; }
        else { i = b; }
        for (; i > 0; i--) {
            if (a % i == 0 && b % i == 0) {
                a = a / i;
                b = b / i;
            }
        }
        return Fraction(a, b);
    }
    friend std::ostream& operator<<(std::ostream& os, const Fraction& f);
public:
    Fraction(int numerator, int denominator) {
        numerator_ = numerator;
        denominator_ = denominator;
    };
    Fraction operator+(Fraction other) {
        return redusing((numerator_ * other.denominator_) + (other.numerator_ * denominator_), denominator_ * other.denominator_);
    }
    Fraction operator-(Fraction other) {
        return redusing((numerator_ * other.denominator_) - (other.numerator_ * denominator_), (denominator_ * other.denominator_));
    }
    Fraction operator*(Fraction other) {
        return redusing((numerator_ * other.numerator_), (denominator_ * other.denominator_));
    }
    Fraction operator/(Fraction other) {
        return redusing((numerator_ * other.denominator_), (denominator_ * other.numerator_));
    }
    Fraction operator++() {
        return redusing(numerator_ = numerator_ + denominator_, denominator_);
    }
    Fraction operator++(int) {
        return redusing(numerator_ = numerator_ + denominator_, denominator_);
    }
    Fraction operator--() {
        return redusing(numerator_ = numerator_ - denominator_, denominator_);
    }
    Fraction operator--(int) {
        return redusing(numerator_ = numerator_ - denominator_, denominator_);
    }
};

std::ostream& operator<<(std::ostream& out, const Fraction& f) {
    out << f.numerator_ << "/" << f.denominator_;
    return out;
}

int main() {
    system("chcp 1251");
    int numerator = 0;
    int denominator = 0;
    std::cout << "Введите чеслитель дроби 1:";
    std::cin >> numerator;
    std::cout << "Введите знаменатель дроби 1:";
    std::cin >> denominator;
    Fraction f1(numerator, denominator);
    std::cout << "Введите чеслитель дроби 2:";
    std::cin >> numerator;
    std::cout << "Введите знаменатель дроби 2:";
    std::cin >> denominator;
    Fraction f2(numerator, denominator);
    std::cout << f1 << " + " << f2 << " = " << f1 + f2 << std::endl;
    std::cout << f1 << " - " << f2 << " = " << f1 - f2 << std::endl;
    std::cout << f1 << " * " << f2 << " = " << f1 * f2 << std::endl;
    std::cout << f1 << " / " << f2 << " = " << f1 / f2 << std::endl;
    std::cout << "++" << f1 << " * " << f2 << " = " << (++f1 * f2) << std::endl;
    std::cout << "Значение дроби 1 = " << f1 << std::endl;
    std::cout << f1 << "--" << " * " << f2 << " = " << (f1-- * f2) << std::endl;
    std::cout << "Значение дроби 1 = " << f1 << std::endl;
}