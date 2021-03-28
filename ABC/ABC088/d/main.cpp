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
    vector<vector<char>> maze;
    vector<vector<int>> dist;
    cin >> h >> w;
    
    dist.assign(h, vector<int> (w, INF));
    maze.assign(h, vector<char> (w, '.'));

    int cnt = 0;
    rep(i,h) rep(j,w) 
    {
        cin >> maze[i][j];
        if (maze[i][j] == '#')
            cnt++;
    }

    queue<pair<int, int>> que;
    que.emplace(make_pair(0, 0));
    dist[0][0] = 0;
    while (que.size() != 0)
    {
        pair<int, int> now = que.front();
        que.pop();

        if (now.first == h && now.second == w)
            break;
        rep(i,4)
        {
            int ny = now.first + dy[i];
            int nx = now.second + dx[i];
            if (ny < 0 || h <= ny || nx < 0 || w <= nx) continue;
            if (maze[ny][nx] == '#') continue;
            if (dist[ny][nx] != INF) continue;
            que.push(make_pair(ny, nx));
            dist[ny][nx] = dist[now.first][now.second] + 1;
        }
    }
    if (dist[h - 1][w - 1] == INF)
    {
        cout << -1 << endl;
        return 0;
    }
    
    int ans = h * w - 1;    // スタート地点を引く 
    ans -= (cnt + dist[h - 1][w - 1]);  // 黒マス + 最短距離を引く
    cout << ans << endl;
    return 0;
}