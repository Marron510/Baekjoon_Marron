#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int arr[3];
    for (int i = 0;i < 3; i++)
    {
        cin >> arr[i];
    }
    
    sort(arr, arr+3);

    while(arr[2] >= arr[0] + arr[1]) {
        arr[2]--;
    }

    int answer = arr[0] + arr[1] + arr[2];
    cout << answer;
    
    return 0;
}