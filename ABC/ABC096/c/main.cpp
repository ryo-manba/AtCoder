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
    int h, w;
    cin >> h >> w;
    string s[h];
    rep(i,h) cin >> s[i];

    rep(i,h){
        rep(j,w){
            if (s[i][j] == '#')
            {
                int sum = 0;
                rep(k,4){
                    int x = j + dx[k];
                    int y = i + dy[k];
                    if (y < 0 || x < 0 || y >= h || x >= w) continue;
                    if (s[y][x] == '#') sum++;
                }
                if (!sum)
                {
                    cout << "No" << endl;
                    return 0;
                }
            }
        }
    }
    cout << "Yes" << endl;
    return 0;
}