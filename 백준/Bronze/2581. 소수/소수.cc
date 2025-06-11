#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool isprime(int n) 
{
    if (n <= 1) return false;
    
    for (int i = 2; i * i <= n; ++i)
    {
        if (n % i == 0) return false;
    }
    return true;
}

int main() 
{
    int m, n;
    cin >> m >> n;

    vector<int> vec;
    
    for (int i = m; i <= n; ++i) 
    {
        if (isprime(i)) 
        {
            vec.push_back(i);
        }
    }

    if (vec.empty())
    {
        cout << -1 << endl;
    } 
    else 
    {
        int sum = 0;
        for (int prime : vec)
        {
            sum += prime;
        }
        cout << sum << endl;
        cout << *min_element(vec.begin(), vec.end()) << endl;
    }

    return 0;
}