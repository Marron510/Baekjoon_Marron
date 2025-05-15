#include <bits/stdc++.h>
using namespace std;

int N, M, a, ret = 0, cnt[15005];


int main()
{
	ios::sync_with_stdio(false), cin.tie(NULL);
	cin >> N >> M;

	for (int i = 0; i < N; i++)
	{
		cin >> a;
		cnt[i] = a;
	}

	if (M > 200000)
	{
		cout << 0 << "\n";
	}
	else
	{
		for (int i = 0; i < N; i++)
		{
			for (int j = i + 1; j < N; j++)
			{
				if (cnt[i] + cnt[j] == M) ret++;
			}
		}
		cout << ret;
	}

	
}