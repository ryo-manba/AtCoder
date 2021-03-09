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
    int c[3][3];
    int x[3], y[3];
    rep(i,3) rep(j,3) cin >> c[i][j];

    y[0] = 0;
    rep(i,3) x[i] = c[0][i] - y[0];
    rep(i,3) y[i] = c[i][0] - x[0];
    bool ok = true;
    rep(i,3) {
        rep(j,3) {
            if (x[j] + y[i] != c[i][j])
                ok = false;
        }
    }
    if (ok)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}
