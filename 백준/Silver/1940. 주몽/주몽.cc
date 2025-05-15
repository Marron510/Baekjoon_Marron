#include <bits/stdc++.h>
using namespace std;

int N, M, a, ret = 0, cnt[15005];


int main()
{

	cin >> N >> M;

	for (int i = 0; i < N; i++)
	{
		cin >> a;
		cnt[i] = a;
	}
	for (int i = 0; i < N; i++)
	{
		for (int j = i + 1; j < N; j++)
		{
			if (cnt[i] + cnt[j] == M) ret++;
		}
	}
	cout << ret;
}