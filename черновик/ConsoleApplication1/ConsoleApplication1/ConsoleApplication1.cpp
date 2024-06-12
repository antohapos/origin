#include <iostream>
using namespace std;

void foo(int arr[]) {
	arr[0] = 7;
}

int main()
{
	int a = 20;
	int* b = &a;
	std::cout << b << std::endl;
	int arr[5];
	int* pArr = &arr[0];
    foo(pArr);
	std::cout << arr[0] << std::endl;
}

