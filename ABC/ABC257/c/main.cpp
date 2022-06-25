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
	string s;
	cin >> n >> s;
	vector<ll> w(n+1,0);
	rep(i,1,n) cin >> w[i];

	vector<ll> childs;
	vector<ll> parents;
	rep(i,s.size())
	{
		if (s[i] == '0') childs.push_back(w[i+1]);
		else parents.push_back(w[i+1]);
	}
	sort(childs.begin(), childs.end());
	sort(parents.begin(), parents.end());
	sort(w.begin(), w.end());

	childs.push_back(INFL);
	parents.push_back(INFL);

	// 以上と未満で分ける
	int j = 0, k = 0;
	ll ans = 0;
	w.push_back(INFL);
	rep(i,n+2)
	{
		if (w[i] > parents[j])
		{
			// 進むごとに条件を満たさなくなっていく
			while (w[i] > parents[j])
			{
				j += 1;
			}
		}
		if (w[i] > childs[k])
		{
			while (w[i] > childs[k])
			{
				k += 1;
			}
		}
		ll pa = max(0ul, parents.size()-1 - j);
		ll ca = max(0, k);
		chmax(ans, pa + ca);
	}

	cout << ans << endl;
	return 0;
}
