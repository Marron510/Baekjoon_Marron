#include <iostream>

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;

	std::cin >> a >> b >> c;

	if (a == b && b == c)
	{
		std::cout << 10000 + (a * 1000);
	}
	else if (a != b && b == c)
	{
		std::cout << 1000 + (b * 100);
	}
	else if (a == b && b != c)
	{
		std::cout << 1000 + (b * 100);
	}
	else if (a == c && b != c)
	{
		std::cout << 1000 + (a * 100);
	}
	else if (a != b && b != c && a != c)
	{
		if (a > b && a > c)
		{
			std::cout << a * 100;
		}
		else if (b > a && b > c)
		{
			std::cout << b * 100;
		}
		else
		{
			std::cout << c * 100;
		}
	}

}