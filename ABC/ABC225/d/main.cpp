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

ll front[100100];
ll back[100100];

void print(ll x)
{
	vector<ll> ans;
	while (front[x] != 0) // 先頭に移動
		x = front[x];

	while (x != 0)
	{
		ans.push_back(x);
		x = back[x];
	}
	int sz = ans.size();
	cout << sz << " ";
	rep(i,sz)
	{
		cout << ans[i];
		if (i != sz - 1) cout << " ";
		else cout << endl;
	}
}

int main()
{
	int n, q;
	cin >> n >> q;

	rep(i,q)
	{
		ll a, x, y;
		cin >> a;
		if (a == 1 || a == 2) cin >> x >> y;
		if (a == 3) cin >> x;

		if (a == 1)
		{
			back[x] = y;
			front[y] = x;
		}
		if (a == 2)
		{
			back[x] = 0;
			front[y] = 0;
		}
		if (a == 3)
		{
			print(x);
		}
	}
    return 0;
}

