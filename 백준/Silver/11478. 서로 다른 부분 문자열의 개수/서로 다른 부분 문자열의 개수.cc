#include <iostream>
#include <algorithm>
#include <set>
using namespace std;

set<string> st;

int main()
{

    string S;
    cin >> S;

    string str = "";
    for (int i = 0; i < S.size(); i++) 
    {
        for (int j = i; j < S.size(); j++) 
        {
            str += S[j];
            st.insert(str);
        }
        
        str = "";
    }

    cout << st.size();

    return 0;
}