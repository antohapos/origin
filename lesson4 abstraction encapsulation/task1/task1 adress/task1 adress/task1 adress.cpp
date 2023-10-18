

#include <iostream>
#include <fstream>

class Address {
private:
    std::string city;
    std::string street;
    int building;
    int apartment;
public:
    Address(std::string city, std::string street, int building, int apartment)
    {
        this->city = city;
        this->street = street;
        this->building = building;
        this->apartment = apartment;
    }
    std::string get_city() { return city; }
    std::string get_street() { return street; }
    int get_building() { return building; }
    int get_apartment() { return apartment; }
};



int main()
{
    system("chcp 1251");
    std::ifstream in("in.txt");
    std::ofstream out("out.txt");

    if (in.is_open()) {
        int size = 0;
        std::string city;
        std::string street;
        int building;
        int apartment;
        in >> size;
        out << size << std::endl;
        Address** arr = new Address * [size];

        for (int n = 0; n < size; n++) {
            in >> city;
            in >> street;
            in >> building;
            in >> apartment;
            arr[n] = new Address(city, street, building, apartment);
        };

        for (int n = size - 1; n >= 0; n--) {
            out << arr[n]->get_city() << ", " << arr[n]->get_street() << ", " << arr[n]->get_building() << ", " << arr[n]->get_apartment() << std::endl;
        }

        for (int n = 0; n < size; n++) {delete arr[n];}

        delete[] arr;
        in.close();
        out.close();
    }
    else { std::cout << "файл in не найден"; }
}

