// #pragma GCC target ("avx2")
// #pragma GCC optimization ("O3")
// #pragma GCC optimization ("unroll-loops")
#include <bits/stdc++.h>
#define rep1(n)       for (int rep1_i= 0; rep1_i < n; rep1_i++)
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

int main()
{
	ll n;
	cin >> n;
	vector<ll> l(n), r(n);
	rep(i,n) cin >> l[i] >> r[i];

	map<ll, ll> mp;
	rep(i,n)
	{
		chmax(mp[l[i]], r[i]);
	}
	ll mini = mp.begin()->first;
	ll maxi = mp.begin()->second;

	set<pair<ll,ll>> st;
	pair<ll,ll> p;
	for (auto [k,v]:mp)
	{
		if (k > maxi) {
			st.insert({mini,maxi});
			mini = k;
			maxi = v;
		} else {
			chmax(maxi, v);
		}
	}
	st.insert({mini,maxi});

	for (auto [k,v]:st)
	{
		cout << k << " " << v << endl;
	}
	return 0;
}
