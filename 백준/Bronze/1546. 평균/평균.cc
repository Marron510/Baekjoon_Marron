#include <iostream>

int N = 0;
int a = 0;
int plus = 0;
double aver = 0.0;
double arr[10000] = {};



int main()
{
	std::cin >> N;
	for (size_t i = 0; i < N; i++)
	{
		std::cin >> a;
		arr[i] = a;
	}

	for (size_t i = 0; i < N - 1; i++)
	{
		if (arr[i] < arr[i + 1])
		{
			arr[i + 1] = arr[i + 1];
		}
		else if (arr[i] >= arr[i + 1])
		{
			int c = 0;
			c = arr[i + 1];
			arr[i + 1] = arr[i];
			arr[i] = c;
		}
		
		
	}


	for (size_t i = 0; i < N; i++)
	{
		aver += (arr[i]  / arr[N - 1] )  * 100 ;
	}
	
	std::cout << aver / (double)N;
}
