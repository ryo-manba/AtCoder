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

int main()
{
    ll n, ans = 0;
    string t;
    cin >> n >> t;
    ll num = pow(10, 10) * 3 - t.size();
    string s = "110";
    rep(i,3)
    {
        bool ok = true;
        rep(j,n)
        {
            if (t[j] != s[(i + j) % 3])     // 文字列がmod 3 で周期的
                ok = false;
        }
        if (ok == false)        // 3つの周期のどれかで文字が等しかったら通る
            continue;
        ans += (num - i) / 3 + 1;
    }
    cout << ans << endl;
    return 0;
}