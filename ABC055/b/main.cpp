#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

ll MOD = 1e9 + 7;

int main()
{
  ll n;
  cin >> n;
  ll ans = 1;
  for(ll i = 1; i <= n; i++)
  {
    ans = ans * i % MOD;
  }
  cout << ans << endl;
  return 0;
}