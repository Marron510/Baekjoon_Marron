#include <iostream>

#include <array>
#include <algorithm>

using namespace std;

std::array<int, 10000001> arr{0,};

int main()
{

	int A = 0;
	int N = 0;
	int n = 0;

	std::cin >> n;
	for (int i = 0; i < n; i++)
	{
		std::cin >> N;
		arr[i] = N;
	}

	std::sort(arr.begin(), arr.begin() + n);
	
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\n";
	}
}