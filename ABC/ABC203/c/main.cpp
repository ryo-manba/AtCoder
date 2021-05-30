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

// start k円	end 0円の時の位置
// a[i]でb[i]円もらえる
// 1進むごとに1円減る

int main()
{
	ll n, k;
	cin >> n >> k;
	vector<pair<ll, ll>> p;
	ll money = k, ans = k;
	ll pre = 0;

	rep (i,n)
	{
		ll a, b;
		cin >> a >> b;
		p.push_back({a, b});
	}
	sort(p.begin(), p.end());
	for (int i = 0; i < p.size(); i++)
	{
		if (pre == p[i].first || (money + pre) - p[i].first >= 0)
		{
			if (pre != p[i].first)
			{
				money = money - (p[i].first - pre) + p[i].second;
				pre = p[i].first;
				ans += p[i].second;
			}
			else
			{
				money = money + p[i].second;
				ans += p[i].second;
			}
		}
		else
			break ;
	}
	cout << ans << endl;
	return 0;
}
