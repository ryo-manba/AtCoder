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
    int w, h, n;
    cin >> w >> h >> n;
    vector<int> x(n), y(n), a(n);
    rep(i,n) cin >> x[i] >> y[i] >> a[i];
    int tmp[110][110] = {};
    rep(i,n)
    {
        if (a[i] == 1)
        {
            rep(j,x[i]) {
                rep(k,h) {
                    tmp[j][k] = 1;
                }
            }
        }
        if (a[i] == 2)
        {
            for (int j = x[i]; j < w; j++) {
                rep(k,h) {
                    tmp[j][k] = 1;
                }
            }
        }

        if (a[i] == 3)
        {
            rep(j,w) {
                rep(k,y[i]) {
                    tmp[j][k] = 1;
                }
            }
        }
        if (a[i] == 4)
        {
            rep(j,w) {
                for (int k = y[i]; k < h; k++) {
                    tmp[j][k] = 1;
                }
            }
        }
    }

    int ans = 0;
    rep(i,w) {
        rep(j,h) {
            if (tmp[i][j] == 0) ans++;
        }
    }
    cout << ans << endl;
    return 0;
}