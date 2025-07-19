#include <iostream>
using namespace std;

int main() 
{
	int n, b = 0;
	cin >> n;

	while (n >= 0)
    {
		if (n % 5 == 0)
        {
			b += (n / 5);
			cout <<  b << '\n';
			return 0;
		}
		else
        {
			n -= 3;
			b++;
		}
	}
	cout << -1 << '\n';
    
    return 0;
}