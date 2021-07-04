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

// 水色aこ,
// 水色bこ、赤色cこ足す
// 水色が赤のd倍以下になるのはいつか

int main()
{
	ll a, b, c, d, ans = 0;
	cin >> a >> b >> c >> d;
	if (c * d <= b)
	{
		cout << -1 << endl;
		return 0;
	}
	ll red = 0;
	while (red * d < a)
	{
		a += b;
		red += c;
		ans++;
	}
	cout << ans << endl;
	return 0;
}
