using namespace std;
#include <bits/stdc++.h>

double a, b, c, ret = 0;

int main()
{
	cin >> a;
	for (int i = 0; i < a; i++)
	{
		cin >> b;
		ret += b * b * b;
	}
	
	
	cout << fixed << setprecision(10) << cbrt(ret) << "\n";
}