#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;
const int INF = (int)1e9;
const ll INFL = (ll)1e15;
const int MOD = 1e9 + 7;
int dy[]={0, 0, 1, -1, 0};
int dx[]={1, -1, 0, 0, 0};
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

//最大公約数
ll gcd(ll a, ll b)
{
  if (a % b == 0)
  {
    return (b);
  }
  else
  {
    return (gcd(b, a%b));
  }
}

//最小公約数
ll lcm(ll a, ll b)
{
  return a * b /gcd(a, b);
}

ll f(ll x, ll c, ll d)
{
    ll res = x;
    res -= x / c;
    res -= x / d;
    res += x / lcm(c, d);
    return res;
}

int main()
{
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    ll ans = f(b, c, d) - f(a - 1, c, d);
    cout << ans << endl;
    return 0;
}