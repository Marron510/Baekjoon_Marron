#include <iostream>

int arr[101] = {};

int main()
{
	int a = 0;
	std::string str;
	int c = 0;
	std::cin >> a;
	std::cin >> str;
	for (size_t i = 0; i < a; i++)
	{
		c += (str[i] - 48);
	}
	std::cout << c;
}
