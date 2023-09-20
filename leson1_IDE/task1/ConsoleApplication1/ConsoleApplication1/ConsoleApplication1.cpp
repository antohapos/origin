#include <iostream>

#include <fstream>
//#include <string>

int* create_array(int size) {
	return new int[size]();
}

int main(int argc, char** argv) {

	std::ifstream in("in.txt");

	if (in.is_open()) {
		int size1;
		in >> size1;
		int* arr1 = create_array(size1);
		for (int i = 0; i < size1; i++) {
			in >> arr1[i];
			//std::cout << arr1[i] << std::endl;
		}

		int size2;
		in >> size2;
		int* arr2 = create_array(size2);
		for (int i = 0; i < size2; i++) {
			in >> arr2[i];
			//std::cout << arr2[i] << std::endl;
		}
		in.close();
		std::ofstream out("out.txt");
		out << size2 << std::endl;
		out << arr2[size2 - 1];
		for (int i = 0; i < size2 - 1; i++) {
			out << " " << arr2[i];
		}
		out << std::endl;
		out << size1 << std::endl;

		for (int i = 1; i < size1; i++) {
			out << arr1[i] << " ";
		}
		out << arr1[0];

		out.close();

		return 1;
	}
	else {
		std::cout << "Error: file 'in' not found";
		return 0;
	}
}