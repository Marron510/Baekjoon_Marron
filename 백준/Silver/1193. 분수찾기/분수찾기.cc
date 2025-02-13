#include <iostream>
#include <cstring>
#include <string>

char arr[10000001] = {};

int N = 0;
int Count = 0;


int main()
{
	std::cin >> N;
	

	// 지그재그였음


	for (int i = 0; i < 10001; i++)
	{
		N -= (i + 1);

		if (0 >= N)
		{
			N += (i + 1);
			Count = i + 1;
			break;
		}
	}

	if (1 == Count % 2)
	{
		std::cout << Count - N + 1 << "\/" << N;
	}
	else 
	{
		std::cout << N << "\/" << Count - N + 1;
	}
}

	
