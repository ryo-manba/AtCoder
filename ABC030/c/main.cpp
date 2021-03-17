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
    int n, m, x, y;
    cin >> n >> m;
    cin >> x >> y;
    int a[101010], b[101010];
    rep(i,n) cin >> a[i];
    rep(i,m) cin >> b[i];
    
    int h = 0;
    int cnt = 0, Y;
    
    while(1)
    {
        Y = lower_bound(a, a + n, h) - a;
        if (Y >= n) break;
        h = a[Y] + x;
        Y = lower_bound(b, b + m, h) - b;
        if (Y >= m) break;
        h = b[Y] + y;
        cnt++;
    }

    cout << cnt << endl;
    return 0;
}