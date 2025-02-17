#include <iostream>
#include <array>
#include <algorithm>
#include <vector>

using namespace std;


int N = 0;

int x, y = 0;

vector<vector<int>> arr;

bool Compare(vector<int> _X, vector<int> _Y)
{
	if (_X.front() == _Y.front())
	{
		return _X[1] < _Y[1];
	}
	else
	{
		return _X.front() < _Y.front();
	}
}

int main()
{
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> x >> y;

		arr.push_back({ x , y });
	}

	sort(arr.begin(), arr.end());
	sort(arr.begin(), arr.end(), Compare);

	for (int i = 0; i < N; i++)
	{
		cout << arr[i][0] << " " << arr[i][1] << "\n";
	}
}
