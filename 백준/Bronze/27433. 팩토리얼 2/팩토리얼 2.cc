#include <iostream>

using namespace std;





	
long long recursion(long long N)
{
	if (N <= 1)
	{
		return 1;
	}
	else
	{
		return N * recursion(N - 1);
	}
}

int main()
{
	long long a = 0;
	cin >> a;
	cout << recursion(a) << endl;
}