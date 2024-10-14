#include <iostream>

int arr[100] = {};
int N = 0;
int M = 0;
int a = 0;
int b = 0;
int c = 0;


int main()
{
	std::cin >> N >> M;
	for (size_t i = 0; i < M; i++)
	{
		std::cin >> a >> b >> c;
		for (size_t j = a - 1; j < b; j++)
		{
			arr[j] = c;
		}
	}
	
	for (size_t i = 0; i < N; i++)
	{
		if (N-1 == i)
		{
			std::cout << arr[i];
		}
		else
		{
			std::cout << arr[i] << " ";
		}
	}


}