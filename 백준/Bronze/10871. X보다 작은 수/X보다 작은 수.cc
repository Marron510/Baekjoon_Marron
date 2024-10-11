#include <iostream>


int main()
{
	int N = 0;
	int X = 0;
	int Y = 0;
	int Arr[10000] = {};
	std::cin >> N >> X;
	for (size_t i = 0; i < N; i++)
	{
		std::cin >> Y;
		Arr[i] = Y;
		if (X > Y)
		{
			std::cout << Y << " ";
		}
		if (N == i)
		{
			return 0;
		}
	}
	

}
