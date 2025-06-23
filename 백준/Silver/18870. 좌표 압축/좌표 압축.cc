#include <bits/stdc++.h>

using namespace std;

int a[1000005];
int n;
vector<int> vec;

int main(void){
    ios::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        vec.push_back(a[i]);
    }

    sort(vec.begin(), vec.end());
    
    vec.erase(unique(vec.begin(), vec.end()), vec.end());

    for (int i = 0; i < n; i++)
    {
        cout << lower_bound(vec.begin(), vec.end(), a[i]) - vec.begin() << ' ';
    }
    
    return 0;
}