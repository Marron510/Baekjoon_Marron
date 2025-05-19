#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll A, B, C;

ll go(int _A, int _B)
{
	if (_B == 1)
	{
		return _A % C;
	}
	
	ll ret = go(_A, _B / 2);
	ret = (ret * ret) % C;
	if (_B % 2)
	{
		ret = (ret * A) % C;
	}
	return ret;
}

int main()
{
	cin >> A >> B >> C;
	cout << go(A, B);
}