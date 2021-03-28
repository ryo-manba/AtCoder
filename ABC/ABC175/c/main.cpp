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
    ll x, k, d;
    cin >> x >> k >> d;
    //　座標の絶対値なので正の値のみ考える
    x = abs(x);
    ll ans;

    // k回移動しても xに届かない場合
    // k * d するとオーバーフローするので移行してあげる
    if (x / d > k)
    {
        ans = x - d * k;
    }
    else
    {
        ll e = x / d;
        k -= e;
        x -= e * d;
        if (k % 2 == 1) x = abs(x - d);
        ans = x; 
    }
    cout << ans << endl;
    return 0;
}