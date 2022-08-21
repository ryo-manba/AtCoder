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

ll n, p, q, r;
ll a[200020];
ll tp = 0;
ll r1 = 0, r2 = 0, r3 = 0;
ll l1 = 0, l2 = 0, l3 = 0;

bool f1() {
	while (true) {
		while (r1 < n && tp < p) {
			tp += a[r1];
			r1 += 1;
		}
		while (l1 < r1 && tp > p) {
			tp -= a[l1];
			l1 += 1;
		}
		if (tp == p) return true;
		if (r1 == n) return false;
	}
}


ll cum[200020];
ll prev2 = 0;
bool f2() {
	ll tq = 0;

	if (r2 < prev2) {
		tq += cum[prev2] - cum[r2];
		r2 = prev2;
	}
	while (r2 < n && tq < q) {
		tq += a[r2];
		cum[r2+1] = a[r2] + cum[r2];
		r2 += 1;
	}
	prev2 = r2;
	if (tq == q) return true;
	return false;
}


ll prev3 = 0;
bool f3() {
	ll tr = 0;
	if (r3 < prev3) {
		tr += cum[prev3] - cum[r3];
		r3 = prev3;
	}
	while (r3 < n && tr < r) {
		tr += a[r3];
		cum[r3+1] = a[r3] + cum[r3];
		r3 += 1;
	}
	prev3 = r3;
	if (tr == r) return true;
	return false;
}

bool solve() {
	if (f1()) {
		r2 = r1;
		if (f2()) {
			r3 = r2;
			if (f3()) return true;
			else {
				tp -= a[l1];
				l1 += 1;
				return solve();
			}
		} else {
			tp -= a[l1];
			l1 += 1;
			return solve();
		}
	} else {
		return false;
	}
	return true;
}

int main()
{
	cin >> n >> p >> q >> r;
	rep(i,n) cin >> a[i];
	cout << (solve() ? "Yes" : "No") << endl;
	return 0;
}
