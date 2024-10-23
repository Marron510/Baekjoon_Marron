#include <iostream>

int N = 0;
int M = 0;
int arr[101] = {};
int arr1[101] = {};
int a = 0;
int b = 0;



int main()
{
	std::cin >> N;
	for (size_t i = 0; i < N; i++)
	{
		arr[i + 1] = i + 1;
	}
	std::cin >> M;
	for (size_t i = 0; i < M; i++)
	{
		std::cin >> a >> b;
		
			for (size_t i = 0; i < b - a  + 1; i++)
			{
				arr1[b - i] = arr[a + i];	
			}
			for (size_t i = a; i < b + 1; i++)
			{
				arr[i] = arr1[i];
			}
		
		
	}
	for (size_t i = 0; i < N; i++)
	{
		
			std::cout << arr[i + 1] << " ";
	
	}
}
