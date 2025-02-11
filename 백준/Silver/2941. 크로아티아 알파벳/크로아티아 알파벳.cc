#include <iostream>
#include <string>

char arr[101] = {0,};
int a = 0;
int count = 0;
int main()
{
	std::cin >> arr;

	while (true)
	{
		if (arr[a] == '\0')
		{
			break;
		}

		// c로 시작할 경우
		if (arr[a] == 'c')
		{
			if (arr[a + 1] == '=' || arr[a + 1] == '-')
			{
				++count;
				a = a + 2;
			}
			else
			{
				++count;
				++a;
			}
		}

		// d로 시작할 경우
		else if (arr[a] == 'd')
		{
			if (arr[a + 1] == 'z')
			{
				if (arr[a + 2] == '=')
				{
					++count;
					a = a + 3;
				}
				else
				{
					++count;
					a = a + 1;
				}
			}
			else if (arr[a + 1] == '-')
			{
				++count;
				a = a + 2;
			}
			else
			{
				++count;
				++a;
			}
		}

		// l로 시작할 경우

		else if (arr[a] == 'l')
		{
			if (arr[a + 1] == 'j')
			{
				++count;
				a = a + 2;
			}
			else
			{
				++count;
				++a;
			}
		}

		// n으로 시작할 경우

		else if (arr[a] == 'n')
		{
			if (arr[a + 1] == 'j')
			{
				++count;
				a = a + 2;
			}
			else
			{
				++count;
				++a;
			}
		}

		// s로 시작할 경우
		else if (arr[a] == 's')
		{
			if (arr[a + 1] == '=')
			{
				++count;
				a = a + 2;
			}
			else
			{
				++count;
				++a;
			}
		}
		// z로 시작할 경우
		else if (arr[a] == 'z')
		{
			if (arr[a + 1] == '=')
			{
				++count;
				a = a + 2;
			}
			else
			{
				++count;
				++a;
			}
		}

		// 나머지
		else
		{
			++count;
			++a;
		}
	}


	std::cout << count;
}

	
