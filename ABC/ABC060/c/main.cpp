#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;
const int INF = (int)1e9;
const ll INFL = (ll)1e15;
const int MOD = 1e9 + 7;
int dx[]={0, 0, -1, 1};
int dy[]={1, -1, 0, 0};
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

int main()
{
    ll n, T;
    cin >> n >> T;
    vector<ll> t(n + 1);
    rep(i,n) cin >> t[i];

    ll ans = 0;
    rep(i,n - 1)
    {
        ll tmp = abs(t[i] - t[i + 1]);
        chmin(tmp, T);
        ans += tmp;
    }
    if (n == 1) cout << T << endl;
    else cout << ans + T << endl;
    return 0;
}