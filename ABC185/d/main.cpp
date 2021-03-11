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
    int n, m;
    cin >> n >> m;
    vector<int> a(m);
    rep(i,m) cin >> a[i];
    sort(a.begin(), a.end());

    // 終端を青マスにする
    a.push_back(n + 1);
    int cur = 1;
    vector<int> s;
    rep(i,m + 1)
    {
        int w = a[i] - cur;
        if (w != 0) s.push_back(w);
        cur = a[i] + 1;
    }
    int mini = INF;
    for (auto w : s) chmin(mini, w);
    int ans = 0;
    // n / m の切り上げ　(ans = n + m - 1) / m;
    for (auto w : s) ans += (w + mini - 1) / mini;
    cout << ans << endl;
    return 0;
}