
/*　約数全列挙
    1.  d=1 から sqrt(n) まで以下を繰り返す
        N を割り切れたら、d と 𝑁/𝑑 を約数として保存する
    ex) N = 36
        d = 1, 36 / 1 = 36
            2, 36 / 2 = 18
            3, 36 / 3 = 12
            4, 36 / 4 = 9
            6 = sqrt(N)

    divisor(n)
    入力：整数 n
    出力：nのすべての約数
    計算量：O(√n)
*/

vector<long long> divisor(long long n) {
    vector<long long> ret;
    for (long long i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            ret.push_back(i);
            if (i * i != n) ret.push_back(n / i);
        }
    }
    sort(ret.begin(), ret.end()); // 昇順に並べる
    return ret;
}