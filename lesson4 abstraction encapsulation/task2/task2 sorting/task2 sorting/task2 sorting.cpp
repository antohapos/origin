#include <iostream>
#include <fstream>
#include <string>


class Address {
private:
    std::string city;
    std::string street;
    int building;
    int apartment;
public:
    Address(std::string city, std::string street, int building, int apartment){
        this->city = city;
        this->street = street;
        this->building = building;
        this->apartment = apartment;
    }
    std::string get_full_address(){
        return city + ", " + street + ", " + std::to_string(building) + ", " + std::to_string(apartment);

    } 
    std::string get_city() { return city; }
    
};


int main(){
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
        for (int j = 0; j < size - 1 ; j++){
            for (int i = 0; i < size - 1; i++) {
                if (arr[i]->get_city()[0] > arr[i + 1]->get_city()[0]) {std::swap(arr[i], arr[i + 1]);}
            }
        }
        for (int n = 0; n < size; n++) {
            out << arr[n]->get_full_address() << std::endl;
            delete arr[n];
        }
        delete[] arr;
        in.close();
        out.close();
    }
    else { std::cout << "файл in не найден"; } 
}
