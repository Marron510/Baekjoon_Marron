using namespace std;
#include <bits/stdc++.h>

int N, A, B, cnt =0;

string str;


int main()
{
	ios::sync_with_stdio(false), cin.tie(NULL);
	cin >> N;
	
	for (int j = 0; j < N; j++)
	{
		cin >> str;
		stack<char> stk;

		for (char i : str)
		{
			if (stk.size() && stk.top() == i)
			{
				stk.pop();
			}
			else
			{
				stk.push(i);
			}
		}
		if (stk.size() == 0)
		{
			cnt++;
		}
	}

	cout << cnt;
}