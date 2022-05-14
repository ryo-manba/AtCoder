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


ll dp1[300300];
ll dp2[300300];
// a[N]からa[N-1]までのDPと
// a[0]からa[N]までのDPの比較
int main()
{
	ll n;
	cin >> n;
	vector<ll> a(n+1);
	for (int i = 1; i <= n; i++) cin >> a[i];
	a[0] = a[n];

	for (int i = 1; i <= n; i++) {
		if (i == 1) dp1[i] = a[i];
		if (i == 2) dp1[i] = dp1[i-1] + a[i];
		if (i >= 3) {
			ll v1 = dp1[i - 1] + a[i];
			ll v2 = dp1[i - 2] + a[i];
			dp1[i] = min(v1, v2);
		}
	}

	for (int i = 0; i < n; i++) {
		if (i == 0) dp2[i] = a[i];
		if (i == 1) dp2[i] = dp2[i-1] + a[i];
		if (i >= 2) {
			ll v1 = dp2[i - 1] + a[i];
			ll v2 = dp2[i - 2] + a[i];
			dp2[i] = min(v1, v2);
		}
	}
	ll ans = min(min(dp1[n], dp1[n-1]), min(dp2[n-1], dp2[n-2]));
	cout << ans << endl;
	return 0;
}

