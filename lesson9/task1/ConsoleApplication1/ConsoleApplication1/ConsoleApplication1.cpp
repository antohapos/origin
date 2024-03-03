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
    double Abs() const { return static_cast<double>(numerator_) / denominator_; }
    bool operator<(const Fraction& other) { return Abs() < other.Abs(); }
    bool operator>(const Fraction& other) { return !(*this < other); }
    bool operator==(const Fraction& other) { return Abs() == other.Abs(); }
    bool operator!=(const Fraction& other) { return !(*this == other); }
    bool operator<=(const Fraction& other) { return !(*this > other); }
    bool operator>=(const Fraction& other) { return !(*this < other); }
};

int main()
{
    Fraction f1(4, 3);
    Fraction f2(6, 11);

    std::cout << "f1" << ((f1 == f2) ? " == " : " not == ") << "f2" << '\n';
    std::cout << "f1" << ((f1 != f2) ? " != " : " not != ") << "f2" << '\n';
    std::cout << "f1" << ((f1 < f2) ? " < " : " not < ") << "f2" << '\n';
    std::cout << "f1" << ((f1 > f2) ? " > " : " not > ") << "f2" << '\n';
    std::cout << "f1" << ((f1 <= f2) ? " <= " : " not <= ") << "f2" << '\n';
    std::cout << "f1" << ((f1 >= f2) ? " >= " : " not >= ") << "f2" << '\n';
    return 0;
}