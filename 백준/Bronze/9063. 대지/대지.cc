#include <iostream>

using namespace std;

int main()
{
	int n, x = 0, y = 0;
    
	int MaxY = -10001, MinY = 10001;
	int MaxX = -10001, MinX = 10001;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> x >> y;

		if (x > MaxX)
		{
			MaxX = x;
		}
		if (x < MinX)
		{
			MinX = x;
		}
		if (y > MaxY)
		{
			MaxY = y;
		}
		if (y < MinY)
		{
			MinY = y;
		}
	}

	x = MaxX - MinX;
	y = MaxY - MinY;

	int ret = x * y;

	cout << ret;


	return 0;
}