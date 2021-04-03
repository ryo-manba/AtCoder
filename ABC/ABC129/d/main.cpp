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

int point[2020][2020];

int main()
{
    int h, w;
    cin >> h >> w;
    vector<string> s(h + 1);
    rep(i,h) cin >> s[i];
    int cntW = 0, cntH = 0;
    rep(i,h) {
        rep(j,w) {
            if (s[i][j] == '#') continue;
            if (s[i][j] == '.')
            {
                int J = j;
                while (J < w && s[i][J] == '.')
                {
                    J++;
                    cntW++;
                }
                for (int m = 0; m < cntW; m++)
                {
                    point[i][j] += cntW;     // 横の値
                    j++;
                }
                cntW = 0;
            }
        }
    }

    rep(j,w) {
        rep(i,h) {
            if (s[i][j] == '#') continue;
            if (s[i][j] == '.')
            {
                int I = i;
                while (I < h && s[I][j] == '.')
                {
                    I++;
                   cntH++;
                }
                for (int m = 0; m < cntH; m++)
                {
                    point[i][j] += cntH;    // 縦の値
                    if (s[i][j] == '.')
                        point[i][j]--;      // かぶっている部分を引く
                    i++;
                }
                cntH = 0;
            }
        }
    }

    int ans = 0;
    rep(i,h) {
        rep(j,w) {
            chmax(ans, point[i][j]);    // 縦横の最大値が答え
        }
    }
    cout << ans << endl;
    return 0;
}