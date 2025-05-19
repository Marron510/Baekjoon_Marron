#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int T, a, b;

int main()
{
	ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
	
	cin >> T;

	for (int i = 0; i < T; i++)
	{
		ll ret = 1;

		cin >> a >> b;

		
		for (int j = 0; j < b; j++)
		{
			ret = (ret * a) % 10;
		}
		if (ret == 0)
		{
			ret = 10;
		}
		cout << ret << "\n";
	}

}