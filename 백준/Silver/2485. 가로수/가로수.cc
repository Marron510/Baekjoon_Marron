#include <iostream>
#include <algorithm>
using namespace std;

int arr[100001];

int go(int a, int b) 
{
    int c;
    while (b) 
    {
        c = a % b;
        a = b;
        b = c;
    }
    return a;
}

int main() 
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr, arr + n);

    int k = go(arr[1] - arr[0], arr[2] - arr[1]);
    
    for (int i = 3; i < n; i++) 
    {
        k = go(k, arr[i] - arr[i - 1]);
    }

    int ret = 0;
    
    for (int i = 1; i < n; i++) 
    {
        ret += (arr[i] - arr[i - 1]) / k - 1;
    }

    cout << ret;
    
    return 0;
}