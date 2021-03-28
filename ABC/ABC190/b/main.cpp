#include <bits/stdc++.h>
using namespace std;

int main() 
{
  int n, s, d;
  cin >> n >> s >> d;
  int a[n], b[n];
  for (int i = 0; i < n; i++)
   cin >> a[i] >> b[i];
  for (int i = 0; i < n; i++)
  {
    if (s > a[i] && d < b[i]){
  	  cout << "Yes" << endl;
      return (0);
    }else 
      continue;
  }
  cout << "No" << endl;
  return (0);
}