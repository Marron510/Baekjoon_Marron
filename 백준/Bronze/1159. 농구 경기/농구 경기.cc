#include <bits/stdc++.h>
using namespace std;

int N, cnt[154];
char ret = 'A';
string str;



int main()
{
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> str;
		cnt[(str[0] - 'a')]++;
	}

	
	for (int i = 0; i < 150 ; i++)
	{
		if (cnt[i] >= 5)
		{
			ret = i + 'a';
			cout << ret;
		}
	}
	if (ret == 'A')
	{
		cout << "PREDAJA";
	}


}