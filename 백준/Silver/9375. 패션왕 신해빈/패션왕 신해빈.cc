#include <bits/stdc++.h>
using namespace std;

int N, M;

string  str1, str2;
map<string, int> mp;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL);
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> M;

		for (int j = 0; j <  M; j++)
		{
			cin >> str1 >> str2;
			mp[str2]++;
		}
		long long ret = 1;

		for (auto i : mp)
		{
			ret *= (long long)(i.second + 1);
		}
		cout << ret - 1 << "\n";
		mp.clear();
	}
	
}