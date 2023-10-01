

#include <iostream>
#include <string>

struct addresses {
    std::string city;
    std::string street;
    int building;
    int apartment;
    int postal_code;
};
void print_address(addresses& a) {
    
    std::cout << "Город: " << a.city << std::endl;
    std::cout << "Улица: " << a.street << std::endl;
    std::cout << "Дом: " << a.building << std::endl;
    std::cout << "Квартира: " << a.apartment << std::endl;
    std::cout << "Индекс: " << a.postal_code << std::endl;
};



int main()
{
    system("chcp 1251");
    addresses address;
    address.city = "Москва";
    address.street = "Арбат";
    address.building = 12;
    address.apartment = 8;
    address.postal_code = 123456;

    print_address(address);

    std::cout << "Город: ";
    std::cin >> address.city;
    std::cout << "Улица: ";
    std::cin >> address.street;
    std::cout << "Номер дома: ";
    std::cin >> address.building;
    std::cout << "квартира: ";
    std::cin >> address.apartment;
    std::cout << "индекс: ";
    std::cin >> address.postal_code;
    
    print_address(address);

}

