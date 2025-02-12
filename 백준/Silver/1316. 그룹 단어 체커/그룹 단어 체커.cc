#include <iostream>
#include <cstring>
#include <string>

char arr[101] = {0,};

size_t N = 0;
size_t TotalCount = 0;
bool bischeck = false;

int main()
{
	std::cin >> N;
	TotalCount = N;

	


	for (size_t i = 0; i < N; i++)
	{

		if (true == bischeck)
		{
			bischeck = false;
		}
		
		std::cin >> arr;

		

		for (size_t j = 0; j < strlen(arr); j++)
		{

			if (true == bischeck)
			{
				break;
			}

			if (j == strlen(arr) - 1)
			{
				break;
			}

			for (size_t k = j + 1; k < strlen(arr); k++)
			{
				if (k >= j + 2)
				{
					if (arr[j] == arr[k])
					{
						--TotalCount;
						bischeck = true;
						break;
					}
				}

				if (arr[j]  == arr[k])
				{
					break;
				}

			}

		}
	}

	std::cout << TotalCount;

}

	
