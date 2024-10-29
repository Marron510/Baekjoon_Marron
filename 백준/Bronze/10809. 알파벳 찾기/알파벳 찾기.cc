#include <iostream>

int arr[26] = {};

int main()
{
	std::string s;
	for (size_t i = 0; i < 26; i++)
	{
		arr[i] = -1;
	}
	
	std::cin >> s;

	for (size_t i = 0; i < s.size(); i++)
	{
		int b = static_cast<int>(s[i]) - 96;
		if (-1 != arr[b-1])
		{
			continue;
		}
		else
		{
			arr[b - 1] = i;
		}
		
	}
	for (size_t i = 0; i < 26; i++)
	{
		std::cout << arr[i] << " ";
	}
	
}
