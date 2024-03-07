#include <iostream>

class Fraction
{
private:
    int numerator_;
    int denominator_;

public:
    Fraction(int numerator, int denominator)
    {
        numerator_ = numerator;
        denominator_ = denominator;
    }
    friend void converting(Fraction& f1, Fraction& f2) {
        int a = f1.numerator_;
        int b = f1.denominator_;
        int c = f2.numerator_;
        int d = f2.denominator_;
        f1 = Fraction(a * d, b * d);
        f2 = Fraction(c * b, d * b);
    }

    bool operator<(const Fraction& other) { return (numerator_ < other.numerator_); }
    bool operator>(const Fraction& other) { return !(numerator_ < other.numerator_); }
    bool operator==(const Fraction& other) { return (numerator_ == other.numerator_); }
    bool operator!=(const Fraction& other) { return !(numerator_ == other.numerator_); }
    bool operator<=(const Fraction& other) { return !(numerator_ > other.numerator_); }
    bool operator>=(const Fraction& other) { return !(numerator_ < other.numerator_); }
};

int main()
{
    Fraction f1(5, 3);
    Fraction f2(6, 11);
    converting(f1, f2);

    std::cout << "f1" << ((f1 == f2) ? " == " : " not == ") << "f2" << '\n';
    std::cout << "f1" << ((f1 != f2) ? " != " : " not != ") << "f2" << '\n';
    std::cout << "f1" << ((f1 < f2) ? " < " : " not < ") << "f2" << '\n';
    std::cout << "f1" << ((f1 > f2) ? " > " : " not > ") << "f2" << '\n';
    std::cout << "f1" << ((f1 <= f2) ? " <= " : " not <= ") << "f2" << '\n';
    std::cout << "f1" << ((f1 >= f2) ? " >= " : " not >= ") << "f2" << '\n';
    return 0;
}