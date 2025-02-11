#include <iostream>
#include <string>


char arr[1000001];
int a = 0;
int count = 1;

int main()
{
	std::cin.getline(arr,1000001);

	while (true)
	{
		if (arr[a] == ' ')
		{
			count++;
		}
		if (arr[a] == '\0')
		{
			if (arr[0] == '\0')
			{
				count--;
			}
			if (arr[0] == ' ')
			{
				count--;
			}
			if (arr[a-1] == ' ')
			{
				count--;
			}
			break;
		}
		a++;
	}
	std::cout << count << std::endl;;
}

	
