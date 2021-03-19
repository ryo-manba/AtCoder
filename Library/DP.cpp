
/* DP(動的計画法)
     1. DP 配列全体を「DP の種類に応じた初期値」で初期化
     2. 初期条件を入力
     3. ループを回す
     4. テーブルから解を得て出力
     
  *再帰的な全探索のイメージが大切
  *貰うDP　-> ノードへの遷移方法を考える (dp[i - 1])
  *配るDP　-> ノードからの遷移方法を考える (dp[i + 1])
*/

// ナップサック問題
int main()
{
    int n;
    ll w, weight[110], value[110]; // 品物100個
    ll dp [110][100100] = {0};

    cin >> n >> w;
    rep(i,n) cin >> weight[i] >> value[i];
    rep(i, n) {
        for (int sum_w = 0; sum_w <= w; sum_w++) {

          // i 番目の品物を選ぶ場合
          // 部分和を添え字に付け加える
            if (sum_w - weight[i] >= 0) {
                chmax(dp[i + 1][sum_w], dp[i][sum_w - weight[i]] + value[i]);
            }

          // i 番目の品物を選ばない場合
            chmax(dp[i + 1][sum_w], dp[i][sum_w]);
        }
    }
    // 重さがsum_w 以下の総和の最大値
    cout << dp[n][w] << endl;
    return 0;
}

// Frog
int main()
{
  int n;
  cin >> n;
  ll h[100010];
  ll dp[100010];
  rep(i,n) cin >> h[i];
  rep(i, 100010) dp[i] = INF;

  dp[0] = 0;
  for(int i = 1; i < n; i++)
  {
    chmin(dp[i], dp[i - 1] + abs(h[i] - h[i - 1]));
    if (i > 1) chmin(dp[i], dp[i - 2] + abs(h[i] - h[i - 2]));
  }
  cout << dp[n - 1] << endl;
}