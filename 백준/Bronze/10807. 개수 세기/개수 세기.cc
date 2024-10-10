#include <iostream>


int main()
{
	char Arr[100] = {};
	int N = 0;
	int IntI = 0;
	int V = 0;
	int Value = 0;
	std::cin >> N;
	for (size_t i = 0; i < N; i++)
	{
		std::cin >> IntI;
		Arr[i] = IntI;
	}
	std::cin >> V;
	for (size_t i = 0; i < N; i++)
	{
		if (Arr[i] == V)
		{
			Value += 1;
		}
	}
	std::cout << Value << std::endl;
	

}
