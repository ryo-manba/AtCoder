#include <bits/stdc++.h>
using namespace std;

int main() 
{
  int a, b, c;
  cin >> a >> b >> c;
  if (c == 0)
  {
    if (a <= b)
      cout << "Aoki" << endl;
  	else
      cout << "Takahashi" << endl;
  }
  if (c == 1)
  {
    if (a >= b)
      cout << "Takahashi" << endl;
  	else 
      cout << "Aoki" << endl;
  }
  return (0);
    
}