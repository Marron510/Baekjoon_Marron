#include <iostream>


int main()
{
	int x = 0;
	int N = 0;
	int a = 0;
	int b = 0;
	int c = 0;
	std::cin >> x >> N;

	for (size_t i = 0; i < N; i++)
	{
		std::cin >> a >> b;

		c = c + (a * b);
	}
	if (x == c)
	{
		std::cout << "Yes" << std::endl;
	}
	else
	{
		std::cout << "No" << std::endl;
	}
	
}