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

char mp[10][10];
bool seen[510][510];
int cnt;
int check;

bool dfs(int x, int y)
{
    seen[x][y] = true;
    rep(i,4) {
        int sx = x + dx[i];
        int sy = y + dy[i];

        if (sx < 0 || sx >= 10 || sy < 0 || sy >= 10) continue;
        if (mp[sx][sy] == 'x') continue;
        if (seen[sx][sy]) continue;
        check++;
        dfs(sx,sy);

    }
    if (check == cnt) return true;
    return false;
}

int main()
{
    cnt = 0;
    string ans = "NO";
    rep(i,10) {
        rep (j,10) {
            cin >> mp[i][j];
            // 陸地の初期値を取る
            if (mp[i][j] == 'o') cnt++;
        }
    } 
    // 海だったらそのマスを陸に変えてDFS
    rep(i,10) {
        rep(j,10) {
            if (mp[i][j] == 'x')
            {      
                mp[i][j] = 'o';
                memset(seen, 0, sizeof(seen));
                check = 0;
                if (dfs(i,j))
                {
                    ans = "YES";
                    break;
                }
                else
                    mp[i][j] = 'x';
            }          
        }
    }   
    cout << ans << endl;
    return 0;
}