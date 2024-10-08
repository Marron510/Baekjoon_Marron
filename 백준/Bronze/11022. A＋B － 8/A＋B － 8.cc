#include <iostream>


int main()
{
	int T = 0;
	int a = 0;
	int b = 0;
	std::cin >> T;
	for (size_t i = 0; i < T; i++)
	{
		std::cin >> a >> b;
		std::cout << "Case" << " " << "\#" << i + 1 << ":"<< " " << a << " " << "\+" << " " << b << " " << "\=" << " " << a + b << std::endl;
	}
	
}