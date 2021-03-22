/* dfs(深さ優先探索)
    これ以上進めなくなるまで探索したら、戻って別のルートで探索し直す
    再帰関数を用いる

    Sの要素数がNの時
     1．何か処理をする
    Sの要素数がN未満の時
     1.Sに加えても条件Pを満たすような要素 a 全てに対して以下を行う
        1.Sにa を加えたものを S’ とする
        2.dfs(S’) を呼び出す
*/


// abcを重複順列で全列挙させる
void dfs(string s, int n)
{
    if (n == s.size())
    {
        cout << s << endl;
        return ;
    }
    dfs(s + "a", n);
    dfs(s + "b", n);
    dfs(s + "c", n);
}

int main()
{
    int n;
    cin >> n;
    dfs("", n);   
    return 0;
}


//　迷路探索問題

// 四方向への移動ベクトル
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

// 入力
int H, W;
vector<string> field;

// 探索
bool seen[510][510]; // seen[h][w] := マス (h, w) が検知済みかどうか
void dfs(int h, int w) {
    seen[h][w] = true;

    // 四方向を探索
    for (int dir = 0; dir < 4; ++dir) {
        int nh = h + dx[dir];
        int nw = w + dy[dir];

        // 場外アウトしたり、移動先が壁の場合はスルー
        if (nh < 0 || nh >= H || nw < 0 || nw >= W) continue;
        if (field[nh][nw] == '#') continue;

        // 移動先が探索済みの場合
        if (seen[nh][nw]) continue;

        // 再帰的に探索
        dfs(nh, nw);
    }
}

int main() {
    // 入力受け取り
    cin >> H >> W;
    field.resize(H);
    for (int h = 0; h < H; ++h) cin >> field[h];

    // s と g のマスを特定する
    int sh, sw, gh, gw;
    for (int h = 0; h < H; ++h) {
        for (int w = 0; w < W; ++w) {
            if (field[h][w] == 's') sh = h, sw = w;
            if (field[h][w] == 'g') gh = h, gw = w;
        }
    }

    // 探索開始
    memset(seen, 0, sizeof(seen)); // seen 配列全体を false に初期化
    dfs(sh, sw);

    // 結果
    if (seen[gh][gw]) cout << "Yes" << endl;
    else cout << "No" << endl;
}