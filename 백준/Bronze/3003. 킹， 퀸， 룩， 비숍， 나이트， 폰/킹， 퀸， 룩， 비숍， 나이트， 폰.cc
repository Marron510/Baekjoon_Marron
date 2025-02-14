#include <iostream>

int a = 0;
int arr[6] = { 1, 1, 2, 2, 2, 8 };
int main()
{
	for (int i = 0; i < 6; i++)
	{
		std::cin >> a;
		arr[i] -= a;

		std::cout << arr[i] << " ";
	}
}
	
