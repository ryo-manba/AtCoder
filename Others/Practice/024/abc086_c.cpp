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

ll n;
ll t[100010], x[100010], y[100010];

int main()
{
	cin >> n;
	for (int i = 1; i <= n; ++i) cin >> t[i] >> x[i] >> y[i];

	ll diff = 0, time = 0;
	for (int i = 1; i <= n; i++)
	{
		diff = abs(x[i] - x[i - 1]) + abs(y[i] - y[i - 1]);
		time = t[i] - t[i - 1];
		if (!(diff % 2 == time % 2 && time >= diff))
		{
			cout << "No" << endl;
			return 0;
		}
	}
	cout << "Yes" << endl;
	return 0;
}
