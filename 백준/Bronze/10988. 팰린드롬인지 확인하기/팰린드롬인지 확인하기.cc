#include <bits/stdc++.h>
using namespace std;

string str , rev;
int ret = 0;

int main()
{
	cin >> str;

	rev = str;
	
	reverse(str.begin(), str.end());

	if (rev == str)
	{
		ret = 1;
	}

	cout << ret;

	return 0;
}