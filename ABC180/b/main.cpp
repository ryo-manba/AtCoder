#include <bits/stdc++.h>
using namespace std;

int main() 
{
  cout << fixed << setprecision(15);

  int n;
  cin >> n;
  long a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (int i = 0; i < n; i++) {
    if (a[i] < 0)
     a[i] *= -1;
  }
  long m = 0;
  for (int i = 0; i < n; i++) {
    m += a[i];
  }
  cout << m << endl;

  long y = 0;
  for (int i = 0; i < n; i++) {
    y += (a[i] * a[i]);
  }
  cout << sqrt(y) << endl;

  int max = 0;
  for (int i = 0; i < n; i++) {
    if (max < a[i])
      max = a[i];
  }
  cout << max << endl;
  return (0);
}