#include <bits/stdc++.h>
using namespace std;

int main() 
{
  int a, b, c,i =0;
  cin >> a >> b >> c;
  while(a > 0)
  {
    a -= b;
    i++;
  }
  cout << c * i << endl;
}