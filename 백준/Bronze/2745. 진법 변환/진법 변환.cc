#include <iostream>
#include <string>
#include <map>
#include <cmath>

using namespace std;

int main(){
    string n;
    int b;
    
    cin >> n >> b;

    map<char, int> m;
    
    for (int i = 0; i < 10; i++)
    {
        m.insert({'0' + i, i});
    }
    for (int i = 10; i < 36; i++)
    {
        m.insert({'A' + i - 10, i});
    }
    
    int c = 0;
    int ret = 0;
    
    for (int i = n.length() - 1; i >= 0; i--)
    {
        ret += m.find(n[i])->second * pow(b, c);
        c += 1;
    }
    cout << ret;
}