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



/*
 * t=1 x <= a <= y
 * t=2 x <= a < y
 * t=3 x < a <= y
 * t=4 x < a < y
 */

int main()
{
	ll n, ans = 0;
	cin >> n;
	vector<tuple<ll, ll, ll>> tup;
	rep(i,n)
	{
		ll a, b, c;
		cin >> a >> b >> c;
		tup.push_back({b, c, a});
	}
	sort(tup.begin(), tup.end());

	ll mini = INFL;
	ll maxi = 0;
	rep(i,n)
	{
		if (get<2>(tup[i]) == 1)
		{
			mini = get<0>(tup[i]);
			maxi = get<1>(tup[i]);
		}
		if (get<2>(tup[i]) == 2)
		{
			mini = get<0>(tup[i]);
			maxi = get<1>(tup[i]) - 1;
		}
		if (get<2>(tup[i]) == 3)
		{
			mini = get<0>(tup[i]) + 1;
			maxi = get<1>(tup[i]);
		}

		if (get<2>(tup[i]) == 4)
		{
			mini = get<0>(tup[i]) + 1;
			maxi = get<1>(tup[i]) - 1;
		}
		for (int j = i + 1; j < n; j++)
		{
			ll mini2, maxi2;
			if (get<2>(tup[j]) == 1)
			{
				mini2 = get<0>(tup[j]);
				maxi2 = get<1>(tup[j]);
			}
			if (get<2>(tup[j]) == 2)
			{
				mini2 = get<0>(tup[j]);
				maxi2 = get<1>(tup[j]) - 1;
			}
			if (get<2>(tup[j]) == 3)
			{
				mini2 = get<0>(tup[j]) + 1;
				maxi2 = get<1>(tup[j]);
			}
			if (get<2>(tup[j]) == 4)
			{
				mini2 = get<0>(tup[j]) + 1;
				maxi2 = get<1>(tup[j]) - 1;
			}
			if ((mini <= mini2 && mini2 <= maxi) || (mini <= maxi2 && maxi2 <= maxi))
				ans++;
		}
	}
	if (ans == 1)
		ans++;

	cout << ans << endl;
	return 0;
}
