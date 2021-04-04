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
    int h, w;
    cin >> h >> w;
    vector<string> a(h);
    rep(i,h) cin >> a[i];

    vector<bool> check_H(w, true);
    vector<bool> check_W(h, true);

    int cnt = 0;
    rep(i,h) {
        rep(j,w) {
            if (a[i][j] == '#') continue;
            if (a[i][j] == '.')
            {
                while (j < w && a[i][j] == '.')
                {
                    j++;
                    cnt++;
                }
                if (cnt == w)
                    check_W[i] = false;
                cnt = 0;
            }
        }
    } 

    cnt = 0;
    rep(j,w) {
        rep(i,h) {
            if (a[i][j] == '#') continue;
            if (a[i][j] == '.')
            {
                while (i < h && a[i][j] == '.')
                {
                    i++;
                    cnt++;
                }
                if (cnt == h)
                    check_H[j] = false;
                cnt = 0;
            }
        }
    }

    rep(i,h) {
        rep(j,w) {
            if (check_H[j] && check_W[i])
            {
                cout << a[i][j];
            }
            if (j == w - 1 && check_W[i])
                cout << endl;
        }
    }
    return 0;
}