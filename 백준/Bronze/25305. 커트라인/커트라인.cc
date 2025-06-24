#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false), cout.tie(NULL), cin.tie(NULL);
	
	int n,k;
	cin >> n >> k;
	vector<int> vec(n);
    
	for(int i = 0; i < n; i++) 
    {
	    cin >> vec[i];
	}
	
	sort(vec.begin(), vec.end(), greater<>());
	
	int ans = vec[k-1];
	
	cout << ans;
    
    return 0;
}