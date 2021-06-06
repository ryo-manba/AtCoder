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

vector<ll> G[2010];
bool used[2010] = {false};
ll ans = 0;

void dfs(ll n)
{
	if (used[n]) return;
	used[n] = true;
	for (auto v : G[n]) {
		dfs(v);
	}
}

int main()
{
	ll n, m;
	cin >> n >> m;
	ll ans = 0;
	if (m == 0) {
		cout << n << endl;
		return (0);
	}
	rep(i,m)
	{
		int a, b;
		cin >> a >> b;
		a--;
		b--;
		G[a].push_back(b);
	}
	rep(i,n) {
		rep(j,n) used[j] = false;
		dfs(i);
		rep(j,n) if (used[j]) ans++;
	}
	cout << ans << endl;
	return (0);
}



