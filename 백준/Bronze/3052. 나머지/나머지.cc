#include <iostream>

int A = 0;
int B = 0;
int Arr[42] = {};

int main()
{
	for (size_t i = 0; i < 10; i++)
	{
		std::cin >> A;
		A = A % 42;
		Arr[A] = 1;
	}
	
	for (size_t i = 0; i < 42; i++)
	{
		if (1 == Arr[i])
		{
			++B;
		}

	}
	
	std::cout << B;



}
