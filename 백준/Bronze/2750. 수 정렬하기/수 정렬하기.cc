#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
	vector<int> vec;
	int n = 0;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int input = 0;
		cin >> input;

		vec.push_back(input);
	}

	sort(vec.begin(), vec.end());

	for (int i = 0; i < n; i++)
	{
		cout << vec[i] << '\n';
	}

	return 0;
}