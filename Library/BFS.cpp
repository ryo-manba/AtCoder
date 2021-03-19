/*  幅優先探索(Breadth First Search)
    キューを用いたアルゴリズム：    *スタックで実装すると深さ優先探索になる。
    1. 始めの状態から遷移可能な状態を、全てキューに入れる
    2. キューに要素がなければ終了する
    3. 現在の状態から遷移可能な状態を、全てキューに入れる
    4. キューから1つ要素を取り出し、そこに状態を遷移させる
    5. 2.に戻る

    計算量
    グラフ 𝐺=(𝑉,𝐸) を幅優先探索する場合は、
    全ての頂点と辺を走査することになるので、計算量は O(V+E)
*/

// 迷路の最短経路を探索
int main()
{
    int H, W, sy, sx, gy, gx;   // map[H][W] スタート(sy, sx) ゴール(gy, gx)
    vector<vector<char>> maze;  // 迷路の内容を保存する配列
    vector<vector<int>> dist;   // 距離を記録しておく配列 
    cin >> H >> W; 
    cin >> sy >> sx;
    cin >> gy >> gx;
    sy--;   // 0始まりに直す
    sx--;
    gy--;
    gx--;

    dist.assign(H, vector<int>(W, INF));    // 初期化
    maze.assign(H, vector<char>(W, '.'));   // 初期化

    rep(i,H) rep(j,W) cin >> maze[i][j];

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
            int dx[]={0, 0, -1, 1};
            int dy[]={1, -1, 0, 0};         // dx, dy は次の探索場所への距離を表す(4方向分)
            int ny = now.first + dy[i];     // 次の探索場所の行番号
            int nx = now.second + dx[i];    // 次の探索場所の列番号
            if (ny < 0 || H <= ny || nx < 0 || W <= nx) continue;   // 迷路の外に出るならスルー
            if (maze[ny][nx] == '#') continue;  // 障害物があればスルー
            if (dist[ny][nx] != INF) continue;  // 探索済みならスルー
            que.push(make_pair(ny, nx));
            dist[ny][nx] = dist[now.first][now.second] + 1;
        }
    }

    cout << dist[gy][gx] << endl;
    return 0;
}