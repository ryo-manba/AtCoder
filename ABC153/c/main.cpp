#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
  ll n, k;
  cin >> n >> k;
  vector<ll>h(n);
  ll ans = 0;
  rep(i,n) cin >> h[i];
  sort(h.begin(),h.end());
  if (n <= k)
  {
    cout << ans << endl;
    return 0;
  }
  rep(i,n - k)
  {
    ans += h[i];
  }
  cout << ans << endl;
  return 0;
}