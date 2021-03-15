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
    int n;
    cin >> n;
    vector<int> x(n);
    rep(i,n) cin >> x[i];

    // 50までの素数を入れておく配列
    vector<int> primes;
    for (int i = 2; i <= 50; i++)
    {
        bool f = true;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0) f = false;
        }
        if (f) primes.push_back(i);
    }

    ll ans = 1e18;
    // bit全探索
    for (int i = 0; i < (1 << primes.size()); i++)
    {
        ll m = 1;
        for (int j = 0; j < primes.size(); j++)
        {
            if (i >> j & 1)
            {
                m *= primes[j];
            }
        }
        bool ok = true;
        // その数で全て素ではないでければtrue
        for (ll a : x)
        {
            if (gcd(a, m) == 1)
            {
                ok = false;
            }
        }
        if (ok) ans = min(ans, m);
    }

    cout << ans << endl;
    return 0;
}