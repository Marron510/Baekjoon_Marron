#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

string go(int N, int B)
{
    string str;

    while (N > 0)
    {
        int temp = N % B;

        if (temp > 9)
        {
            str += temp - 10 + 'A';
        }
        else
        {
            str += temp + '0';
        }
        N /= B;
    }
    return str;
}

int main()
{
    int N, B;

    cin >> N >> B;

    auto ret = go(N, B);
    reverse(ret.begin(), ret.end());

    cout << ret;
}
