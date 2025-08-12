#include <iostream>
using namespace std;

int main() 
{
  int num;
  int result = 0;
  
  cin >> num;

  for(int i = 1; i * i <= num; i++)
  {
    result++;
  }
    
  cout << result;
  return 0;
}