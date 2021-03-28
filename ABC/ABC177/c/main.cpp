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

int main()
{
    int n;
    cin >> n;
    vector<ll> a(n);
    ll ans = 0;
    vector<ll> dp(n + 1);
    rep(i,n)
    {
        cin >> a[i];
        dp[i + 1] = dp[i] + a[i];
    }
    rep(i,n) {
        ans += a[i] * ((dp[n] - dp[i + 1]) % MOD);
        ans %= MOD;
    }
    cout << ans << endl;
    return 0;
}