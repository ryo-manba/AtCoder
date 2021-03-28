#include <bits/stdc++.h>
using namespace std;

int main() 
{
  int n,x,count = 0;
  cin >> n >> x;
  x *= 100;
  int v[n], p[n];
  for (int i = 0; i < n; i++)
    cin >> v[i] >> p[i];
  for (int i = 0; i < n; i++)
  {
    v[i] *= p[i];
    x -= v[i];
    count++;
    if (x < 0)
    {  
      cout << count << endl;
      return (0);
    }
  }
  cout << -1 << endl;
  return (0);
}