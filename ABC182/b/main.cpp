#include <bits/stdc++.h>
using namespace std;

int main() 
{
  int n, ans = -1; 
  int best = -1;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++)
    cin >> a[i];
  for (int k = 2; k <= 1000; k++)
  {
    int num = 0;
    for (int i = 0; i < n; i++)
    {
      if (a[i] % k == 0) num++;
    }
     if (best < num)
      {
     	best = num;
      	ans = k;
      }
  }
  cout << ans << endl;
}
