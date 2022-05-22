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

ll ncr(ll n, ll r) {
	if (r < 0 || r > n) return 0;
	r = min(r, n-r);
	ll num, den, g;
	num = den = 1;
	while (r) {
	num *= n--;
	den *= r--;
	g = gcd(num, den);
	num /= g;
	den /= g;
	}
	return num;
}

int main()
{
	ll n;
	cin >> n;
	vector<ll> a(n);
	rep(i,n) cin >> a[i];

	map<ll,ll> mp;
	rep(i,n) mp[a[i]] += 1;
	ll ans = ncr(n, 3);

	for (auto [k, v]: mp)
	{
		if (v >= 2)
		{
			ans -= ncr(v, 2) * (n - v);
		}
		if (v >= 3)
		{
			ans -= ncr(v, 3);
		}
	}
	cout << ans << endl;
	return 0;
}
