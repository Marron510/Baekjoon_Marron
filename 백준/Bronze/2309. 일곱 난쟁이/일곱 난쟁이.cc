#include <bits/stdc++.h>
using namespace std;

int b, sum;
vector<int> a;
pair<int, int> c;

void solve()
{
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (sum - a[i] - a[j] == 100)
			{
				c.first =  a[i];
				c.second= a[j];
			}
		}
	}

	
}

int main()
{
	for (int i = 0; i < 9; i++)
	{
		cin >> b;
		a.push_back(b);
		sum += b;
	}

	solve();
	
	sort(a.begin(), a.end());

	for (int i = 0; i < 9; i++)
	{
		if (a[i] == c.first || a[i] == c.second) continue;

		cout << a[i] << "\n";
	}

}