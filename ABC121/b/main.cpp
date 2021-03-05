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
    int n, m, c;
    cin >> n >> m >> c;
    vector<int> b(m);
    int count = 0;
    int a[n][m];
    rep(i,m) cin >> b[i];
    rep(i,n) {
        int ans = 0;
        rep(j,m) {
            cin >> a[i][j];
            ans += a[i][j] * b[j];
            if (j == m - 1)
            {
                if (ans + c > 0)
                    count++;
            }
        }
    }

    cout << count << endl;
    return 0;
}
