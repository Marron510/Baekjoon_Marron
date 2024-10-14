#include <iostream>

int arr[100] = {};
int N = 0;
int M = 0;
int a = 0;
int b = 0;

int main()
{	
	std::cin >> N >> M;

	for (size_t i = 0; i < N; i++)
	{
		arr[i + 1] = i + 1;
	}
	
	for (size_t j = 0; j < M; j++)
	{
		std::cin >> a >> b;
		int Value = 0;
		Value = arr[a];
		arr[a] = arr[b];
		arr[b] = Value;
	}
	for (size_t e = 0; e < N; e++)
	{
		if (N == e + 1)
		{
			std::cout << arr[e + 1];
		}
		else
		{
			std::cout << arr[e + 1] << " ";
		}
	}
	

}