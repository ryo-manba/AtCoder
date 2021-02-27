#include <bits/stdc++.h>
using namespace std;

int main() 
{
  int a, b;
  cin >> a >> b;
  a -= b;
  if (a > 2 || a < -2)
    cout << "No" << endl;
  else
    cout << "Yes" << endl;
}