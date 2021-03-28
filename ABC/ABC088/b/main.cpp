#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
  int n;
  cin >> n;
  int ans = 0;
  vector<int> a(n);
  rep(i,n) cin >> a[i];
  sort(a.begin(), a.end(), greater<int>());
  rep(i,n)
  {
    if (i == 0)
      ans += a[i];
    else if(i % 2 == 0)
      ans += a[i];
    else
      ans -= a[i];
  }
  cout << ans << endl;
  return 0;
}