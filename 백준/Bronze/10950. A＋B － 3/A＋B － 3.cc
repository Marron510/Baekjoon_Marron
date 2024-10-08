#include <iostream>


int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int arr[100000] = {};
	int* arrptr = &arr[0];
	std::cin >> a;
	while (a--)
	{
		std::cin >> b >> c;
		std::cout << b + c << std::endl;
	}
	

}