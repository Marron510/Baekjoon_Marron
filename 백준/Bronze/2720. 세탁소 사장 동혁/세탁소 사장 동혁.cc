#include <iostream>
using namespace std;
int main()
{
	int t = 0, input = 0;
	int change[4] = { 25, 10, 5, 1 };

	cin >> t;

	for (int i = 0; i < t; i++)
	{
		cin >> input;

		for (int i = 0; i < 4; i++)
		{
			cout << input / change[i] << ' ';
			input %= change[i];
		}
		cout << '\n';
	}

	return 0;
}