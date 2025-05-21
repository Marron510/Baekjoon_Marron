#include <iostream>
using namespace std;
typedef	long long ll;

ll ret = 1;

ll go(ll _n)
{
	if (_n <= 1)
	{
		return ret;
	}

	return ret = _n * go(_n - 1);
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	ll n;
	cin >> n;


	cout << go(n);

	return 0;
}
