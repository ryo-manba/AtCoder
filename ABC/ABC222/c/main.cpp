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

int	check(char x, char y)
{
	if (x == y) return 0; // あいこ
	if ((x == 'G' && y == 'P') || (x == 'C' && y == 'G') || (x == 'P' && y == 'C'))
		return (-1); // xが負け
	return (1); // xが勝ち
}

int cnt[1010];

int main()
{
	int n, m;
	cin >> n >> m;
	vector<string> a(2*n);
	rep(i,2*n) cin >> a[i];

	rep(i,m+1)
	{
		vector<pair<int,int>> vec;
		rep(j,2*n) vec.push_back({-cnt[j],j});
		sort(vec.begin(),vec.end());
		if (i == m)
		{
			rep(i,vec.size()) cout << vec[i].second + 1 << endl;
		}
		rep(j,n)
		{
			int p1 = vec[j*2].second;
			int p2 = vec[j*2+1].second;
			int res = check(a[p1][i], a[p2][i]);
			if (res == 1) cnt[p1] += 1;
			if (res == -1) cnt[p2] += 1;
		}
	}
	return 0;
}
