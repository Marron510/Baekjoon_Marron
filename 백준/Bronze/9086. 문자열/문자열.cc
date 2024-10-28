#include <iostream>





int main()
{
	int a = 0;
	std::cin >> a;

	for (size_t i = 0; i < a; i++)
	{
		std::string str;
		std::cin >> str;
		int b = 0;
		b = str.size();
		std::cout << str[0];
		std::cout << str[b - 1] << std::endl;
	}
	
	
}
