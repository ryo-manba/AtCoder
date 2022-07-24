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
	int h[3], w[3];
	rep(i,3) cin >> h[i];
	rep(i,3) cin >> w[i];

	map<int, vector<vector<int>>> mp;
	rep(i,3) {
		int target = h[i];
		for (int j = 1; j <= target - 2; j++) {
			for (int k = 1; k <= target - (j + 1); k++) {
				int l = target - (j + k);
				if (l <= 0) break;

				vector<int> a(3);
				a[0] = j;
				a[1] = k;
				a[2] = l;
				mp[i].push_back(a);
			}
		}
	}

	int ans = 0;
	// 0,1,2の全パターンを試す
	rep(i,mp[0].size()) {
		int w1 = 0, w2 = 0, w3 = 0;
		rep(j,mp[1].size()) {
			rep(k,mp[2].size()) {
				w1 = mp[0][i][0] + mp[1][j][0] + mp[2][k][0];
				w2 = mp[0][i][1] + mp[1][j][1] + mp[2][k][1];
				w3 = mp[0][i][2] + mp[1][j][2] + mp[2][k][2];
				if (w[0] == w1 && w[1] == w2 && w[2] == w3) {
					ans += 1;
				}
			}
		}
	}
	cout << ans << endl;
	return 0;
}
