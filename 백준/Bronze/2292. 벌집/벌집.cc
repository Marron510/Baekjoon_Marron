#include<iostream>

using namespace std;

int main()
{
	int input = 0;

	cin >> input;

	int step = 1;

	if (input == 1) step = 1;

	for (int sum = 2; sum <= input; step++)
		sum += 6 * step;
        
	cout << step;
}
