#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
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

//UnionFind
vector<vector<ll>> G;
vector<bool> seen;
struct UnionFind {
	vector<ll> par, siz;

	UnionFind(ll n):par(n + 1), siz(n + 1, 1) {
		for (int i = 0; i <= n; i++)
			par[i] = i;
	}

	void mkpar(ll n, ll set) {  //親はset=根
		for(auto next_n: G[n]) {
			if (seen[next_n])
				continue;
			seen[next_n] = true;
			par[next_n] = set;
			mkpar(next_n, set);
			siz[n] += siz[next_n];
		}
	}

	void mkpar2(ll n) { //親は1個上、sizがとれる
		for (auto next_n: G[n]) {
			if (seen[next_n])
				continue;
			seen[next_n] = true;
			par[next_n] = n;
			mkpar2(next_n);
			siz[n] += siz[next_n];
		}
	}

	ll root(ll x) {
		if (par[x] == x)
			return x;
		return par[x] = root(par[x]);
	}

	void unite(ll x, ll y) {
		ll rx = root(x), ry = root(y);
		if (rx == ry)
			return;
		par[ry] = rx;
		siz[rx] += siz[ry];
	}

	bool issame(ll x, ll y) {
		return root(x) == root(y);
	}

	ll size(ll x) {
		return siz[root(x)];
	}
};

int	main()
{
	ll n;
	cin >> n;
	UnionFind tree(200020);
	vector<ll> a(200020);
	rep(i,n) cin >> a[i];
	ll ans = 0;

	rep(i, n / 2)
	{
		ll x = a[i];
		ll y = a[n - 1 - i];
		if (tree.root(x) == tree.root(y))
			continue;
		ans++;
		tree.unite(x, y);	// 違っていたら根を変える
	}
	cout << ans << endl;
}
