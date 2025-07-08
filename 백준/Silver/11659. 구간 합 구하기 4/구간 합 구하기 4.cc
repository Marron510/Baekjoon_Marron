#include <bits/stdc++.h>
using namespace std;

int n, m;
int number[100004];
int total[100004];

int main(void){
    ios::sync_with_stdio(NULL), cin.tie(NULL);

    cin >> n >> m;

    total[0] = 0;

    for (int k = 1; k <= n; k++)
    {
        cin >> number[k];
        total[k] = total[k - 1] + number[k];
    }

    while (m--)
    {
        int i, j;

        cin >> i >> j;
    
        cout << total[j] - total[i - 1] << '\n'; 
    }
    
    return 0;
}