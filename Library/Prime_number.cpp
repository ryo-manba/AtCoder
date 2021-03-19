
/* 素数判定

    正の整数 N が、2 以上 sqrt(N)以下の整数で割り切れないならば、
    sqrt(N) 以上 N−1 以下の整数で割り切れることもない
    ex) N = 50
        N / 2 = 25
        N / 25 = 2
    *大きい整数の相方は小さい整数になるので、もともと小さい整数で割れるはず
*/

bool is_prime(long long N) {
    if (N == 1) return false;
    for (long long i = 2; i * i <= N; ++i) {
        if (N % i == 0) return false;
    }
    return true;
}

int main() {
    long long N;
    cin >> N;
    if (is_prime(N)) cout << "Yes" << endl;
    else cout << "No" << endl;
}