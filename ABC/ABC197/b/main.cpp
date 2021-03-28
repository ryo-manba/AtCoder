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
    int h, w, x, y;
    cin >> h >> w >> x >> y;
    char s[110][110] = {'#'};
    x--;
    y--;
    rep(i,h) 
    {
        rep(j,w)
        {
            cin >> s[i][j];
        }   
    }
    
    int ans = 1;

    int p = 1;
    if (s[x][y + p] == '.')
    {
        while (s[x][y + p] == '.' && y + p != w)
        {
            p++;
            ans++;
        }
    }

    int i = 1;
    if (y != 0)
    {
        if (s[x][y - i] == '.')
        {
            while (s[x][y - i] == '.')
            {
                i++;
                ans++;
                if (y - i == -1)
                    break;
            }
        }
    }

    int j = 1;
    if (s[x + j][y] == '.')
    {
        while (s[x + j][y] == '.' && x + j != h)
        {
            j++;
            ans++;
        }
    }

    int k = 1;
    if (x != 0)
    {   if (s[x - k][y] == '.')
        {
            while (s[x - k][y] == '.')
            {
                k++;
                ans++;
                if (x - k == -1)
                    break;
            }
        }
    }
    cout << ans << endl;
    return 0;
}