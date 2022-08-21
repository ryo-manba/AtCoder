// #pragma GCC target ("avx2")
// #pragma GCC optimization ("O3")
// #pragma GCC optimization ("unroll-loops")
#include <bits/stdc++.h>
#define rep1(n)       for (int rep1_i = 0; rep1_i < n; rep1_i++)
#define rep2(i, n)    for (int i = 0; i < n; i++)
#define rep3(i, m, n) for (int i = m; i <= n; i++)
#define overload3(o1, o2, o3, name, ...) name
#define rep(...) overload3(__VA_ARGS__, rep3,rep2,rep1)(__VA_ARGS__)
#define INF ((1<<30)-1)
#define INFL ((1LL<<62)-1)
#define MOD 998244353
using namespace std;
using ll = long long;
using ld = long double;
using pll = pair<ll, ll>;
struct fast_ios { fast_ios(){ cin.tie(nullptr), ios::sync_with_stdio(false), cout << fixed << setprecision(20); }; } fast_ios_;
int dx[]={0, 0, -1, 1};
int dy[]={1, -1, 0, 0};
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
#define debug(var)  do{std::cout << #var << " : ";view(var);}while(0)
template<typename T> void view(T e){std::cout << e << std::endl;}
template<typename T> void view(const std::vector<T>& v){for(const auto& e : v){ std::cout << e << " "; } std::cout << std::endl;}
template<typename T> void view(const std::vector<std::vector<T> >& vv){ for(const auto& v : vv){ view(v); } }

ll n, m, a, b, c, d, e, f;
ll x[100100], y[100100];

ll dp[3][100100];

void solve() {
	cin >> n >> m;
	cin >> a >> b >> c >> d >> e >> f;
	rep(i,1,m) cin >> x[i] >> y[i];

	map<pair<ll,ll>, bool> mp;
	rep(i,1,m) {
		mp[{x[i], y[i]}] = true;
	}

	ll i = 0, j = 0;
	stack<pair<ll,ll>> sta;
	sta.push({0,0});
	rep(n) {
		pair<ll,ll> p;
		while (!sta.empty()) {
			p = sta.top();
			i = p.first;
			j = p.second;
			if (!mp[{i+a, j+b}]) {
				dp[i+a][j+b] = dp[i][j] + 1;
				sta.push({i+a, j+b});
			}
			if (!mp[{i+c, j+d}]) {
				dp[i+c][j+d] = dp[i][j] + 1;
				sta.push({i+c, j+d});
			}
			if (!mp[{i+e, j+f}]) {
				dp[i+e][j+f] = dp[i][j] + 1;
				sta.push({i+e, j+f});
			}
		}
	}
}

int main()
{
	solve();
	return 0;
}
