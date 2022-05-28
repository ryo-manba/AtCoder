#include <bits/stdc++.h>
#define rep1(n)       for (int rep1_i= 0; rep1_i < n; rep1_i++)
#define rep2(i, n)    for (int i = 0; i < n; i++)
#define rep3(i, m, n) for (int i = m; i < n; i++)
#define overload3(o1, o2, o3, name, ...) name
#define rep(...) overload3(__VA_ARGS__, rep3,rep2,rep1)(__VA_ARGS__)
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
#define debug(var)  do{std::cout << #var << " : ";view(var);}while(0)
template<typename T> void view(T e){std::cout << e << std::endl;}
template<typename T> void view(const std::vector<T>& v){for(const auto& e : v){ std::cout << e << " "; } std::cout << std::endl;}
template<typename T> void view(const std::vector<std::vector<T> >& vv){ for(const auto& v : vv){ view(v); } }

ll mod = 998244353;

/**
 * - 数列の要素はすべて M以下
 * - 次の要素との差が K以上
 */

ll dp[1010][5050];
ll n, m, k;


// 1つ前のindexとその地点のindex
ll calc(ll prev_idx, ll cur_idx)
{
	ll sum = 0;

	ll t = cur_idx + k;
	if (t <= m) {
		for (ll i = t; i <= m; i++)
		{
			sum = max(dp[prev_idx][i], 1ll) % mod + sum % mod;
			sum %= mod;
		}
	}
	t = cur_idx - k;
	if (t < 0) {
		return sum;
	}

	for (ll i = t; i >= 1; i--)
	{
		sum = max(dp[prev_idx][i], 1ll) % mod + sum % mod;
		sum %= mod;
	}
	return sum;
}

int main()
{
	cin >> n >> m >> k;

	for (int i = 2; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			dp[i][j] = calc(i - 1, j);
		}
	}

	ll ans = 0;
	for (int i = 1; i <= m; i++) {
		ans = ans % mod + dp[n][i] % mod;
	}
	cout << ans << endl;
	return 0;
}

