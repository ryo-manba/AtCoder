#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;
const int INF = (int)1e9;
const ll INFL = (ll)1e15;
const int MOD = 1e9 + 7;
int dy[]={0, 0, 1, -1, 0};
int dx[]={1, -1, 0, 0, 0};
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(n);
    rep(i,n) cin >> a[i] >> b[i];
    vector<pair<int, int>> ab(n);
    rep(i,n) ab[i] = make_pair(a[i], b[i]);
    sort(ab.begin(), ab.end());

    ll ans = 0;
    rep(i,n)
    {
        ll buy = min(m, ab[i].second);
        ans += buy * ab[i].first;
        m -= buy;
    }
    cout << ans << endl;
    return 0;
}