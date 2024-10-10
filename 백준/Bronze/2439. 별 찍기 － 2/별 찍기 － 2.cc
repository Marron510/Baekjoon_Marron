#include <iostream>


int main()
{
	int N = 0;
	std::cin >> N;
	for (size_t i = 0; i < N; i++)
	{
		for (size_t k = N ; k > i + 1; k--)
		{
			std::cout << " ";
		}

		for (size_t j = 0 ; j < i + 1; j++)
		{
			std::cout << "*";
		}

		std::cout << std::endl;
		
	}
	
}
