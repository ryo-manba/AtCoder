#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;
struct fast_ios { fast_ios(){ cin.tie(nullptr), ios::sync_with_stdio(false), cout << fixed << setprecision(20); }; } fast_ios_;
const int INF = (int)1e9;
const ll INFL = (ll)1e18;
const int MOD = 1e9 + 7;
const double EPS = 1e-10;
int dx[]={0, 0, -1, 1};
int dy[]={1, -1, 0, 0};
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

/* 1,2桁が同じかつ、3桁目の差が200の倍数 */
int main()
{
    ll n, div, mod, ans = 0;
    cin >> n;
    map<ll, ll> odd, even;
    rep(i,n)
    {
        ll a;
        cin >> a;
        div = a / 100;
        mod = a % 100;
        if (div % 2 == 0)
        {
            ans += even[mod];
            even[mod]++;
        }
        else
        {
            ans += odd[mod];
            odd[mod]++;
        }
    }
    cout << ans << endl;
    return 0;
}
