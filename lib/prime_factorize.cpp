
/* 素因数分解
    1. sqrt(N)以下の素数 p に対して以下を行う
        N を p で何回割り切れるかを保存。N をその回数 p で割った数に変更する
    2. N が 1 にならなければ N は素数。
       そうでなければ、保存していた素数と割り切れる回数のペア。
    
    * N が素数でなければ2以上　sqrt(N)以下の数に約数があることを利用する
    * 計算量　O(sqrt(N))
*/

/*  prime_factor(n)
    入力：整数 n
    出力：nの素因数分解
    計算量：O(√n)前後
*/

vector<pair<long long, long long> > prime_factorize(long long N) {
    vector<pair<long long, long long> > res;
    for (long long a = 2; a * a <= N; ++a) {
        if (N % a != 0) continue;
        long long ex = 0; // 指数

        // 割れる限り割り続ける
        while (N % a == 0) {
            ++ex;
            N /= a;
        }

        // その結果を push
        res.push_back({a, ex});
    }

    // 最後に残った数について
    if (N != 1) res.push_back({N, 1});
    return res;
}

int main() {
    long long N;
    cin >> N; // 2020
    const auto &res = prime_factorize(N);
    cout << N << ":";
    for (auto p : res) {
        for (int i = 0; i < p.second; ++i) cout << " " << p.first;
    }
    cout << endl;
    // 2020: 2 2 5 101
}
// ex) 2020 = 2^2 * 5^1 * 101^1 => {{2, 2}, {5, 1}, {101, 1}}


/* SPF を利用したアルゴリズム
    前処理
        エラトステネスの篩と同様のアルゴリズムで SPF を各数について求める
    クエリ（Nの素因数分解を求める）
    1. 以下を N が 1 になるまで繰り返す
        𝑛 の SPF を 素因数の一つとして保存しておく
        𝑛 を SPF で割った商を新たな N とする
    2. 保存しておいた素因数が、素因数分解になっている
    ex) 48 の素因数の一つは 2
        48 / 2 = 24 の素因数の一つは 2
        24 / 2 = 12 の素因数の一つは 2
        12 / 2 = 6 の素因数の一つは 2
        6 / 2 = 3 の素因数の一つは 3
        以上より、48 = 2 ^ 4 × 3


    * SPF(Smallest Prime Factor)：各数に対する最小の素因数 のこと
    * 計算量 O(log N)
*/

/*  PrimeFact
    init(N): 初期化。O(N log log N)
    get(n): クエリ。素因数分解を求める。O(log n)
 */

template <typename T>
struct PrimeFact {
    vector<T> spf;
    PrimeFact(T N) { init(N); }
    void init(T N) { // 前処理。spf を求める
        spf.assign(N + 1, 0);
        for (T i = 0; i <= N; i++) spf[i] = i;
        for (T i = 2; i * i <= N; i++) {
            if (spf[i] == i) {
                for (T j = i * i; j <= N; j += i) {
                    if (spf[j] == j) {
                        spf[j] = i;
                    }
                }
            }
        }
    }
    map<T, T> get(T n) { // nの素因数分解を求める
        map<T, T> m;
        while (n != 1) {
            m[spf[n]]++;
            n /= spf[n];
        }
        return m;
    }
};