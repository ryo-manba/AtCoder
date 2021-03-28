#include <bits/stdc++.h>
using namespace std;

int main() 
{
  int a,b,c,d, min = 0;
  cin >> a >> b >> c >> d;
  min = a;
  if (min > b)
    min = b;
  if (min > c)
    min = c;
  if (min > d)
    min = d;
  cout << min << endl;
}