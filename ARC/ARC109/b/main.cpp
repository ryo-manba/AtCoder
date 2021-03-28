#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;
struct fast_ios { fast_ios(){ cin.tie(nullptr), ios::sync_with_stdio(false), cout << fixed << setprecision(20); }; } fast_ios_;
const int INF = (int)1e9;
const ll INFL = (ll)1e18;
const int MOD = 1e9 + 7;
const double EPS = 1e-8;
int dx[]={0, 0, -1, 1};
int dy[]={1, -1, 0, 0};
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

ll binary_search(ll n) {
    ll left = 0;
    ll right = 5e9;
    while (right - left > 1) {
        ll mid = (left + right) / 2;
        if (mid * (mid + 1) / 2 <= n + 1) 
            left = mid;
        else 
            right = mid;
    }
    return left;
} 
int main()
{
    ll n;
    cin >> n;
    ll tmp = binary_search(n);
    ll ans = n + 1 - tmp;
    cout << ans << endl;
    return 0;
}