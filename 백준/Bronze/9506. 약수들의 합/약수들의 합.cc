#include<iostream>
#include<vector>
using namespace std;

int main(void)
{
	while (1)
	{
		vector<int> vec;
		int sum = 0;
		int n;
		cin >> n;
        
		if (n == -1) break;
		for (int i = 1; i < n; i++)
			if (n % i == 0)
            {
                vec.push_back(i);
            }
		for (int i = 0; i < vec.size(); i++)
        { 
            sum += vec[i];
        }
        
		if (n == sum)
		{
			cout << n << " = ";
            
			for (int i = 0; i < vec.size(); i++)
			{
				if (i == vec.size() - 1)
					cout << vec[i];
				else
					cout << vec[i] << " + ";
			}
			cout << '\n';
		}
		else
			cout << n << " is NOT perfect.\n";
	}
	return 0;
}