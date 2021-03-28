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

int main()
{
    int n;
    cin >> n;
    vector<ll> a(n), l(n), r(n);
    rep(i,n)
    {
        cin >> a[i];
        if (i == 0)
            l[i] = a[i];
        else
            l[i] = gcd(l[i - 1], a[i]);
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (i == n - 1)
            r[i] = a[i];
        else
            r[i] = gcd(r[i + 1], a[i]);
    }
    ll ans = 0;
    rep(i,n)
    {
        if (i == 0)
            chmax(ans, r[i + 1]);
        else if (i == n - 1)
            chmax(ans, l[i - 1]);
        else
            chmax(ans, gcd(l[i - 1], r[i + 1]));
    }
    cout << ans << endl;
    return 0;
}
