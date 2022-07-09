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

ll n;
ll sx, sy, tx, ty;
ll x[3030], y[3030], r[3030];

#define YES "Yes"
#define NO "No"

// 円上に点があるかの判定
// (とある円の中心とチェックしたい点との距離)^2 == (とある円の半径)^2
int get_circle_on(int px, int py)
{
	rep(i,n)
	{
		ll dist = abs(px - x[i]) * abs(px - x[i]) + abs(py - y[i]) * abs(py - y[i]);
		if (dist == r[i] * r[i]) return i;
	}
	return -1;
}

string solve()
{
	int start = get_circle_on(sx, sy);
	int end = get_circle_on(tx, ty);

	if (start == -1) return NO;

	vector<int> graph[3030];
	rep(i,n)
	{
		rep(j,i+1,n-1)
		{
			ll dist = abs(x[i] - x[j]) * abs(x[i] - x[j]) + abs(y[i] - y[j]) * abs(y[i] - y[j]);

			// どちらの円も他方の円の外部にあるケース
			if ((r[i] + r[j]) * (r[i] + r[j]) < dist) continue;

			// どちらか一方の円が他方の円の内部にあるケース
			if (dist < abs(r[i] - r[j]) * abs(r[i] - r[j])) continue;

			graph[i].push_back(j);
			graph[j].push_back(i);
		}
	}

	queue<int> que;
	vector<bool> seen(3030, false);

	que.push(start);
	seen[start] = true;

	while (!que.empty())
	{
		int cu = que.front();
		que.pop();

		if (cu == end) return YES;

		for (auto to: graph[cu]) {
			if (seen[to]) continue;

			que.push(to);
			seen[to] = true;
		}
	}

	return NO;
}

int main()
{
	cin >> n;
	cin >> sx >> sy >> tx >> ty;
	rep(i,n) cin >> x[i] >> y[i] >> r[i];
	cout << solve() << endl;
}
