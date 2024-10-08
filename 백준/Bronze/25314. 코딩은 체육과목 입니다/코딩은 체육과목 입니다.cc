#include <iostream>


int main()
{
	int N = 0;
	std::cin >> N;
	int IntN = N / 4;
	for (size_t i = 0; i < IntN; i++)
	{
		std::cout << "long" << " ";
	}
	std::cout << "int" << std::endl;
}