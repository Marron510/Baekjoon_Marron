#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int x, y, w, h;
    vector<int> vec;
    
    cin >> x >> y >> w >> h;
    
    vec.push_back(x - 0);
    vec.push_back(w - x);
    vec.push_back(y - 0);
    vec.push_back(h - y);
    
    sort(vec.begin(), vec.end());
    
    cout << vec[0];
    
    return 0;
}