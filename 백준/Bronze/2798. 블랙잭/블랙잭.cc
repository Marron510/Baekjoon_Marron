#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
    int N, M;
    cin >> N >> M;
    
    int num[N];
    
    for (int i = 0; i < N; ++i) 
    {
        cin >> num[i];
    }

    sort(num, num + N);

    int result = 0;
    for (int i = 0; i < N - 2; ++i) 
    {
        for (int j = i + 1; j < N - 1; ++j) 
        {
            for (int k = j + 1; k < N; ++k) 
            {
                int sum = num[i] + num[j] + num[k];
                
                if (sum > M) break;
                
                result = max(result, sum);
            }
        }
    }

    cout << result << '\n';

    return 0;
}