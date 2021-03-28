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
    int h, w, k;
    cin >> h >> w >> k;
    vector<string> c(h);
    rep(i,h) cin >> c[i];
    int ans = 0;

    rep(is,1<<h) {
        rep(js,1<<w) {
            int cnt = 0;
            rep(i,h) {
                rep(j, w) {
                    // その行か列が消えている場合はcontinue
                    if (is >> i & 1) continue;
                    if (js >> j & 1) continue;
                    if (c[i][j] == '#') cnt++;
                }
            }
            // 残った黒マスがkと等しいか
            if (cnt == k) ans++;
        }
    }
    cout << ans << endl;
    return 0;
}