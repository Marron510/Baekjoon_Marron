#include<iostream>
using namespace std;

int main() 
{
	int ret = 2;

	int a;
	cin >> a;

	while (a--) ret = (ret * 2) - 1;

	cout << ret * ret;
}
