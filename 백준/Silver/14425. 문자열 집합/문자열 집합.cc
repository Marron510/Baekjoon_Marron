#include <iostream>
#include <map>
#include <set>

using namespace std;

int go(set<string> s, int m)
{
    string str;
    int ret = 0;
    
    while(m--)
    {
        cin >> str;
        ret += s.count(str);
    }
    
    return ret;
}

int main()
{
    int n, m;
    string str;
    
    cin >> n >> m;

    set<string> s;

    while (n--)
    {
        cin >> str;
        s.insert(str);
    }

    cout << go(s, m);

    return 0;
}