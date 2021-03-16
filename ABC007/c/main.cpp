#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;
struct fast_ios { fast_ios(){ cin.tie(nullptr), ios::sync_with_stdio(false), cout << fixed << setprecision(20); }; } fast_ios_;
const int INF = (int)1e9;
const ll INFL = (ll)1e15;
const int MOD = 1e9 + 7;
const double EPS = 1e-8;
int dx[]={0, 0, -1, 1};
int dy[]={1, -1, 0, 0};
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

int main()
{
    int r, c, sy, sx, gy, gx;
    vector<vector<char>> maze;  // 迷路の内容を保存する配列
    vector<vector<int>> dist;   // 距離を記録しておく配列 
    cin >> r >> c; 
    cin >> sy >> sx;
    cin >> gy >> gx;
    sy--;   // 0始まりに直す
    sx--;
    gy--;
    gx--;

    dist.assign(r, vector<int>(c, INF));    // 初期化
    maze.assign(r, vector<char>(c, '.'));   // 初期化

    rep(i,r) rep(j,c) cin >> maze[i][j];

    queue<pair<int, int>> que;
    que.emplace(make_pair(sy, sx)); // sから探索する
    dist[sy][sx] = 0;
    while (que.size() != 0) // キューの要素がなくなったら終了
    {
        pair<int, int> now = que.front();   // 現在の状態
        que.pop();

        if (now.first == gy && now.second == gx)    // 目的地にたどり着いたので終了
            break;
        rep(i,4)
        {
            // dx, dy は次の探索場所への距離を表す(4方向分)
            int ny = now.first + dy[i];     // 次の探索場所の行番号
            int nx = now.second + dx[i];    // 次の探索場所の列番号
            if (ny < 0 || r <= ny || nx < 0 || c <= nx) continue;   // 迷路の外に出るならスルー
            if (maze[ny][nx] == '#') continue;  // 障害物があればスルー
            if (dist[ny][nx] != INF) continue;  // 探索済みならスルー
            que.push(make_pair(ny, nx));
            dist[ny][nx] = dist[now.first][now.second] + 1;
        }
    }

    cout << dist[gy][gx] << endl;
    return 0;
}