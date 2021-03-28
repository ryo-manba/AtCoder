#include <bits/stdc++.h>
using namespace std;

int main() 
{
  int n, m, t,v,ans = 0;
  cin >> n >> m >> t;
	v = n; 
  int a[m], b[m];
  for (int i = 0; i < m; i++)
    {
      cin >> a[i] >> b[i];
    }
  int now = 0;
  int bat = n;

for (int i = 0; i < m; i++)
{
  bat -= a[i] - now;
  now = a[i];
  if (bat <= 0)
  {
    cout << "No" << endl;
    return (0);
  }
  bat += b[i] - a[i];
  if (bat > n)
    bat = n;
  now = b[i];
}
bat -= t - now;
if (bat <= 0)
{
  cout << "No" << endl;
  return (0);
}
cout << "Yes" << endl;
return (0);
}