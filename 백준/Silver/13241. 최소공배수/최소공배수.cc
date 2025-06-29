#include <iostream>
using namespace std;

long long int gcd(long long int x, long long int y)
{
  if(x % y == 0)
  {
    return y;
  }
    
  return gcd(y, x % y);
}

long long int lcd(long long int x, long long int y)
{
  return x * y / gcd(x, y);
}

int main()
{
  long long int a, b;
  cin >> a >> b;

  cout << ((a <= b) ? lcd(a, b) : lcd(b, a));
    
  return 0;
}