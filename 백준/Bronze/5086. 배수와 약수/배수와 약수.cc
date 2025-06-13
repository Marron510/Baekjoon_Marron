#include<iostream>

using namespace std;

void run(int x, int y)
{
	if (y % x == 0)
	{
		cout << "factor" << '\n';
	}
	else if (x % y == 0)
	{
		cout << "multiple" << '\n';
	}
	else
	{
		cout << "neither" << '\n';
	}
}

int main()
{
	int x = 0, y = 0;

	while (true)
	{
		cin >> x >> y;

		if ((x == 0) && (y == 0))
		{
			break;
		}

		run(x, y);
	}

	return 0;
}