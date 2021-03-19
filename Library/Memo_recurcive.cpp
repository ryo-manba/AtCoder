
/* メモ化再帰
   同じ引数に対する答えをメモする
   計算済みであれば再帰をせずに直接リターンする
   *フィボナッチの場合
        普通の再帰 fibo(40) -> 約3億回
        メモ化再帰 fibo(40) -> 79回
*/

// フィボナッチ
long long fibo(int n, vector<long long> &memo) {
    // ベースケース
    if (n == 0) return 0;
    else if (n == 1) return 1;

    // メモをチェック (既に計算済みなら答えをリターンする)
    if (memo[n] != -1) return memo[n];

    // 答えをメモしながら、再帰呼び出し
    return memo[n] = fibo(n-1, memo) + fibo(n-2, memo);
}

int main() {
    // メモ用配列 (-1 は未計算であることを表す)
    vector<long long> memo(50, -1);
    for (int n = 0; n < 50; ++n) {
        cout << n << " 項目の値: " << fibo(n, memo) << endl;
    }
}


// flog
const long long INF = 1LL << 60;
// 入力
int N;
long long h[100010];

// メモ用の DP テーブル
long long dp[100010];

long long rec(int i) {
    // DP の値が更新されていたらそのままリターン
    if (dp[i] < INF) return dp[i];

    // 足場 0 のコストは 0
    if (i == 0) return 0;

    // i-1, i-2 それぞれ試す
    long long res = INF;
    chmin(res, rec(i-1) + abs(h[i] - h[i - 1])); // 足場 i-1 から来た場合
    if (i > 1) chmin(res, rec(i-2) + abs(h[i] - h[i - 2])); // 足場 i-2 から来た場合

    // 結果をメモしながら、返す
    return dp[i] = res;
}

int main() {
    int N; cin >> N;
    for (int i = 0; i < N; ++i) cin >> h[i];

    // 初期化 (最小化問題なので INF に初期化)
    for (int i = 0; i < 100010; ++i) dp[i] = INF;

    // 答え
    cout << rec(N-1) << endl;
}