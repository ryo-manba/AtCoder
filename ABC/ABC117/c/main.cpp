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
    vector<int> x(m);
    rep(i,m) cin >> x[i];
    if (n >= m)
    {
        cout << 0 << endl;
        return 0;
    }
    sort(x.begin(), x.end());

    // 差分をdに入れる
    vector<int> d(m - 1);
    rep(i,m - 1) d[i] = abs(x[i + 1] - x[i]);
    sort(d.rbegin(), d.rend());
    
    // 差分の大きい順に消して、残りを足す
    rep(i,n - 1)
    {
        d.erase(d.begin());
    }
    int ans = 0;
    rep(i, m - n)
    {
        ans += d[i];
    }
    cout << ans << endl;
    return 0;
}
