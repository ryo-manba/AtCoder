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

int main()
{
    ll a, b, x;
    cin >> a >> b >> x;
    ll l = 0, r = INF + 1;
    auto keta = [&](ll mid) // 桁を求める
    {
        int res = 0;
        while (mid)
        {
            mid /= 10;
            res++;
        } 
        return res;
    };

    auto f = [&](ll mid)    // 値を求める
    {
        return a * mid + b * keta(mid);
    };

    while (r - l > 1)   //　二分探索
    {
        ll mid = (l + r) / 2;
        if (f(mid) <= x) l = mid;
        else r = mid;
    }

    cout << l << endl;
    return 0;
}