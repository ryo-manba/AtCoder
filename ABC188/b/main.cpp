#include <bits/stdc++.h>
using namespace std;

int main() 
{
  int n,x = 0;
  cin >> n;
  int a[n], b[n];
  for (int i = 0; i < n; i++)
    cin >> a[i];
  for (int i = 0; i < n; i++)
    cin >> b[i];
  for (int i = 0; i < n; i++)
    x += a[i] * b[i];
  if (x == 0)
    cout << "Yes" << endl;
  else
    cout << "No" <<endl;
  return (0);
}