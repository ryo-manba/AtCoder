#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;
struct fast_ios { fast_ios(){ cin.tie(nullptr), ios::sync_with_stdio(false), cout << fixed << setprecision(20); }; } fast_ios_;
const int INF = (int)1e9;
const ll INFL = (ll)1e15;
const int MOD = 1e9 + 7;
const double EPS = 1e-8;
int dx[]={0, 0, -1, 1};
int dy[]={1, -1, 0, 0};
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

const ll mod = 998244353;

int main()
{
    ll a, b, c;
    cin >> a >> b >> c;
    ll ans = 0;
    a = a * (a + 1) / 2 % mod;
    b = b * (b + 1) / 2 % mod;
    c = c * (c + 1) / 2 % mod;
    ans = a * b % mod * c % mod;
    cout << ans << endl;
    return 0;
}