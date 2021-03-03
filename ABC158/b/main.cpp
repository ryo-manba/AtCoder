#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
  ll n, a, b;
  ll ans = 0;
  ll rem = 0;
  cin >> n >> a >> b;
  ans =  n / (a + b) * a;
  rem = n % (a + b);
  ans += min(rem, a);
  cout << ans << endl;
  return 0;
}