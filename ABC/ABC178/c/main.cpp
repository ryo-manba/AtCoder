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


//　オーバーフロー防止
ll powmod(ll x, ll y)
{
    ll res = 1;
    for (ll i = 0; i < y; i++)
    {
        res = res * x % MOD;
    }
    return res;
}

int main()
{
    ll n;
    cin >> n;

    // 包除原理
    // ベン図でイメージすると分かりやすい
    ll ans = powmod(10, n) - powmod(9, n) - powmod(9, n) + powmod(8, n);
    ans %= MOD;
    ans = (ans + MOD) % MOD;
    cout << ans << endl;
    return 0;
}