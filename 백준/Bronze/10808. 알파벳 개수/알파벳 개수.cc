#include <bits/stdc++.h>
using namespace std;

string str;

int a[27];


int main()
{
	cin >> str;
	for (char i : str)
	{
		a[i - 'a']++;
	}

	for (int i = 0; i < 26 ; i++)
	{
		cout << a[i] << " ";
	}
}