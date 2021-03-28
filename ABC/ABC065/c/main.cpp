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
    ll n, m;
    cin >> n >> m;
    if (n > m) swap(n, m);

    if (m - n > 1)
    {
        cout << 0 << endl;
        return 0;
    }
    else
    {
        ll ans = 1;
        if (m == n) // 2n!m!通り
            ans = 2;

        // 階乗を求める
        // n!m!通り
        for (ll i = 1; i <= n; i++)
        {
            ans = (ans * i) % MOD;
        }
        for (ll i = 1; i <= m; i++)
        {
            ans = (ans * i) % MOD;
        }
        cout << ans << endl;
    }
    return 0;
}