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
    int n, d;
    cin >> n >> d;
    double x[n][d];
    rep(i,n) rep(j,d) cin >> x[i][j];
    int ans = 0;
    rep(i,n) rep(j,i)
    {
        int sq = 0;
        rep(k,d) {
            int s = x[i][k] - x[j][k];
            sq += s * s;
        }
        int s = sqrt(sq) + 0.5;
        if (s * s == sq) ans++;
    }
    cout << ans << endl;
    return 0;
}
