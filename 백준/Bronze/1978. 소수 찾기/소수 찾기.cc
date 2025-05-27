#include <iostream>
using namespace std;

int N, cnt;
int check;

int main()
{
	cin >> N;

	while (N--)
	{
		int num;
		check = 0;
		cin >> num;

		for (int i = 1; i < num; i++)
		{
			if (num % i == 0 && i != 1)
				break;

			check++;
		}

		if (num - 1 == check && num != 1)
			cnt++;
	}

	cout << cnt;
}