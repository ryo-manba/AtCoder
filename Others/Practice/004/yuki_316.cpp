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

int main()
{
	int n, a, b, c;
	cin >> n >> a >> b >> c;

	int ans = 0;
	ans += n / a;
	ans += n / b;
	ans += n / c;

	int	tmp1 = lcm(a, b);
	int	tmp2 = lcm(a, c);
	int	tmp3 = lcm(b, c);
	int tmp4 = lcm(tmp1, c);

	ans -= n / tmp1;
	ans -= n / tmp2;
	ans -= n / tmp3;

	ans += n / tmp4;
	cout << ans << endl;
	return 0;
}
