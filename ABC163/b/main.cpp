#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
  int n, m;
  cin >> n >> m;
  int a[m];
  int ans = 0;
  rep(i,m)
  {
    cin >> a[i];
    ans += a[i];
  } 
  n -= ans;
  if (n < 0)
    cout << -1 << endl;
  else
    cout << n << endl;
  return 0;
}