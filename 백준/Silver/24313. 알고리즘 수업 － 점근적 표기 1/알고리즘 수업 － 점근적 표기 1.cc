#include <iostream>

int main()
{
	int a1 = 0;
	int a0 = 0;
	int c = 0;
	int n0 = 0;
	
	std::cin >> a1 >> a0 >> c >> n0;


	for (int i = 0; i < 101; i++)
	{

		if (n0 <= i)
		{
			if ((a1 * i) + a0 <= c * i)
			{
				
				
			}
			else
			{
				std::cout << 0;
				return 0;
			}

		}

	}

	std::cout << 1;
}
	
