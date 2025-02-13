#include <iostream>
#include <cstring>
#include <string>

char arr[101][101] = {};

int N = 0;
int x = 0;
int y = 0;

int total = 0;


int main()
{
	std::cin >> N;

	for (int i = 0; i < N; i++)
	{
		std::cin >> x >> y;
		for (int j = 0; j < 10; j++)
		{
			for (int k = 0; k < 10; k++)
			{
				arr[y + k][x + j] = 1;
			}
		}
	}

	for (size_t i = 0; i < 100; i++)
	{
		for (size_t j = 0; j < 100; j++)
		{
			total += arr[j][i];
		}
	}


	std::cout << total;
}

	
