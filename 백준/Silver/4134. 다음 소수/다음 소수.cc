#include <iostream>
using namespace std;

typedef long long ll;

bool isPrime(ll i) 
{
    if(i == 0 || i == 1) 
    {
        return false;
    }
    
    for(ll j = 2; j * j <= i; j++) 
    {
        if(i % j == 0) 
        {
            return false;
        }
    }
    return true;
}

ll solution(ll n) 
{
    for(ll i = n; true; i++) 
    {
        if(isPrime(i)) 
        {
            return i;
        }
    }
}

int main() 
{
    ios_base::sync_with_stdio(false), cout.tie(NULL), cin.tie(NULL);
	
	int t;
	ll n;
	cin >> t;
    
	while(t--) 
    {
	    cin >> n;
	    ll ans = solution(n);
	    cout << ans << '\n';
	}
	
    return 0;
}