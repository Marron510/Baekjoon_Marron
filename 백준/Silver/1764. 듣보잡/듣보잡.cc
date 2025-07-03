#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main() 
{
	ios_base::sync_with_stdio(false), cin.tie(0);

	string h, s;
	vector<string> hvec, avec;
	int n, m;

	cin >> n >> m;

	for (int i = 0; i < n; i++) 
    {
		cin >> h;
		hvec.push_back(h);
	}

	sort(hvec.begin(), hvec.end());

	for (int i = 0; i < m; i++)
    {
		cin >> s;
		if (binary_search(hvec.begin(), hvec.end(), s)) 
        {
			avec.push_back(s);
		}
	}
	
	sort(avec.begin(), avec.end());

	cout << avec.size() << "\n";

	for (auto a : avec) 
    {
		cout << a << "\n";
	}

	return 0;
}