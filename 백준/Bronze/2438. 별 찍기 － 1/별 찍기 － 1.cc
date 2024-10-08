#include <iostream>


int main()
{
	int N = 0;
	std::cin >> N;
	int NumN = N + 1;
	for (size_t i = 1; i < NumN; i++)
	{
		for (size_t j = 0; j < i; j++)
		{
			std::cout << "*";
		}
		std::cout << std::endl;
	}
	
}