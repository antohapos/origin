#include <exception>
#include <iostream>
#include <string>



class MathException : public std::exception {
public:
     MathException(std::string&& whatStr) noexcept : whatStr(std::move(whatStr)) { }
     MathException(const std::string& whatStr) noexcept : whatStr(whatStr) { }
    ~MathException() noexcept = default;

    const char* what() const noexcept override;

private:
    std::string whatStr;
};
const char* MathException::what() const noexcept
{
    return whatStr.c_str();
}



int function(std::string str, int forbidden_length){
    if (forbidden_length == str.length()) {
        throw MathException("Вы ввели слово запретной длины! До свидания");
    }
    return str.length();
}


int main()
{
    system("chcp 1251");
    std::string str;
    int forbidden_length;
    bool errors = true;
    std::cout << "Введите запретную длину: ";
    std::cin >> forbidden_length;
    while (errors) {
        std::cout << "Введите слово: ";
        std::cin >> str;
        try {
            std::cout << "Длинна слова" << " \"" << str << "\" равна " << function(str, forbidden_length) << std::endl;
        }
        catch (MathException& e) {
            errors = false ;
            
            std::cout << e.what() << std::endl;
            
        }
    }
}   

