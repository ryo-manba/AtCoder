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

/* dpの例

dp[1][1] = 1;
dp[1][2] = 1;
dp[1][3] = 1;
dp[1][4] = 1;
dp[1][5] = 1;
dp[1][6] = 1;
dp[1][7] = 1;
dp[1][8] = 1;
dp[1][9] = 1;

           dp[i-1][j+k] (1<=i<=n, -1<=k<=1)
dp[2][1] =            dp[1][1] + dp[1][2];
dp[2][2] = dp[1][1] + dp[1][2] + dp[1][3];
dp[2][3] = dp[1][2] + dp[1][3] + dp[1][4];
dp[2][4] = dp[1][3] + dp[1][4] + dp[1][5];
dp[2][5] = dp[1][4] + dp[1][5] + dp[1][6];
dp[2][6] = dp[1][5] + dp[1][6] + dp[1][7];
dp[2][7] = dp[1][6] + dp[1][7] + dp[1][8];
dp[2][8] = dp[1][7] + dp[1][8] + dp[1][9];
dp[2][9] = dp[1][8] + dp[1][9];
*/

const ll mod = 998244353;
ll dp[1000010][11];

int main()
{
	ll n;
	cin >> n;

	// 先頭は1を埋めておく
	for (int i = 1; i <= 9; ++i) dp[1][i] = 1;

	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1; j <= 9; ++j)
		{
			for (int k = -1; k <= 1; ++k)
			{
				dp[i][j] += dp[i-1][j+k];
				dp[i][j] %= mod;
			}
		}
	}

	ll sum = 0;
	for (int i = 1; i <= 9; ++i)
	{
		sum += dp[n][i];
		sum %= mod;
	}
	cout << sum << endl;
}

