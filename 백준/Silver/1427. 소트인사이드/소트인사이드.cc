#include <iostream>
#include <array>
#include <algorithm>
#include <vector>

using namespace std;


char A = {};
std::vector<int> Arr;

bool ReturnLess(const int& _Left, const int& _Right)
{
	if (_Left > _Right)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{



	while (true)
	{
		A = getchar();
		if (A == '\n')
		{
			break;
		}
		Arr.push_back(A - '0');
	}


	std::sort(Arr.begin(), Arr.end(), ReturnLess);
	
	for (int i = 0; i < Arr.size(); i++)
	{
		cout << Arr[i];
	}
}
