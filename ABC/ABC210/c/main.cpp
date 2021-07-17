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
	ll n, k, ans = 0, tmp = 0;
	cin >> n >> k;
	vector<ll> c(n);
	map<ll,ll> mp;
	rep(i,n)
	{
		if (i >= k)
		{
			mp[c[i - k]]--;
			if (mp[c[i - k]] == 0)
				tmp--;
		}
		cin >> c[i];
		mp[c[i]]++;
		if (mp[c[i]] == 1)
			tmp++;
		chmax(ans, tmp);
	}
	cout << ans << endl;
	return 0;
}
