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

ll n, m;
ll a[100010], b[100010];

int main()
{
	cin >> n >> m;
	for (int i = 1; i < n; i++) // 右端の距離を調べる
	{
		int x;
		cin >> x;
		a[i] = a[i - 1] + x;
	}
	ll ans = 0;
	for (int i = 1; i <= m; i++)
	{
		int x;
		cin >> x;
		b[i] = b[i - 1] + x;
		ans += abs(x);
		if (b[i] < 0)
		{
			ll tmp = 100000 + b[i];
			ans -= (100000 - tmp);
			b[i] = 0;
		}
		if (b[i] > a[n - 1])
		{
			ll tmp = INFL - b[i];
			ans -= (INFL - tmp);
			a[i] = a[n - 1];
		}
	}
	cout << ans << endl;
	return 0;
}
