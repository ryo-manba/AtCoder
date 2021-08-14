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
	ll n;
	cin >> n;
	vector<ll> s(n), t(n);
	rep(i,n) cin >> s[i];
	rep(i,n) cin >> t[i];


	vector<ll> ans(n, INFL);
	ans[0] = t[0];
	for (int i = 1; i < n; i++)
	{
		ll tmp = ans[i - 1] + s[i - 1];
		ans[i] = min(t[i], tmp);
	}
	ans[0] = min(ans[0], ans[n - 1] + s[n - 1]);
	for (int i = 1; i < n; i++)
	{
		ll tmp = ans[i - 1] + s[i - 1];
		ans[i] = min(t[i], tmp);
	}
	rep(i,n)
	{
		cout << ans[i] << endl;
	}
	return 0;
}
