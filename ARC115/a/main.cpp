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
    int n, m;
    cin >> n >> m;
    vector<string> s(n);
    vector<ll> num(2);

    rep(i,n)
    {
        string s;
        cin >> s;
        ll cnt = 0;
        // 1の数の合計を偶数と奇数に分ける
        for (auto a : s) if (a == '1') cnt++;
        num[cnt % 2]++;
    }
    
    ll ans = num[0] * num[1];
    cout << ans << endl;
    return 0;
}