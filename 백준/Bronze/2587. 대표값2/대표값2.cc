#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	vector<int> vec(5);
	int sum = 0, avg = 0, mid = 0;

	for (int i = 0; i < 5; i++)
	{
		cin >> vec[i];
		sum += vec[i];
	}

	sort(vec.begin(), vec.end());

	avg = sum / 5;
	mid = vec[2];

	cout << avg << '\n' << mid;

	return 0;
}