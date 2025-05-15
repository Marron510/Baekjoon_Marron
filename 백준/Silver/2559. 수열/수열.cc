#include <bits/stdc++.h>
using namespace std;

int N, K , temp, arr[100004], ret = -10000004;

int main()
{
	cin >> N >> K;
	for (int i = 1; i <= N; i++)
	{
		cin >> temp;
		arr[i] = arr[i - 1] + temp;
	}

	for (int j = K; j <= N; j++)
	{
		ret = max(ret, arr[j] - arr[j - K]);
	}

	cout << ret;
}