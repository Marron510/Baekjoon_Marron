#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(const string& a, const string& b)
{
	if (a.length() == b.length())
	{
		return a < b;
	}
	return a.length() < b.length();
}


int main()
{
	int N;
	vector<string> v;
	string str;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> str;
		v.push_back(str);
	}
	
	sort(v.begin(), v.end(), compare);

	v.erase(unique(v.begin(), v.end()), v.end());

	for (string s : v)
	{
		cout << s << "\n";
	}
}
