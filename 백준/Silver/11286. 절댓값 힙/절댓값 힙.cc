#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <math.h>

using namespace std;
priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;

 
int main()
{
    int n;
    cin>>n;
    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if(x == 0)
        {
            if(pq.empty())
            {
                cout << 0 << "\n";
            }
            else
            {
                cout << pq.top().second << "\n";
                pq.pop();
            }
        }
        else
        {
            pq.push({abs(x), x});
        }
    }
}