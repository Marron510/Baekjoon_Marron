#include <iostream>


int main()
{
	int A = 0;
	int B = 0;
	
	
	while (true)
	{
		std::cin >> A >> B;
		if (0 == A && 0 == B)
		{
			return 0;
		}
		else
		{
			A + B;
			std::cout << A + B << std::endl;
		}
		
	}
	
}
