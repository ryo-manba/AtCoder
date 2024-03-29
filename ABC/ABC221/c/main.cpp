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
	string s;
	cin >> s;
	sort(s.rbegin(), s.rend());
	ll aa, bb;
	int sz = s.size();
	string a, b;
	rep(i,sz)
	{
		if (sz % 2 && i == sz -1) break ;
		if (i == 0)
		{
			a.push_back(s[i]);
			continue;
		}
		if (i == 1)
		{
			b.push_back(s[i]);
			continue;
		}
		if (stoll(a) > stoll(b))
			b.push_back(s[i]);
		else
			a.push_back(s[i]);
	}
	if (sz % 2)
	{
		if (a > b) b.push_back(s[sz-1]);
		else a.push_back(s[sz-1]);
	}
	aa = stoll(a);
	bb = stoll(b);
	cout << aa * bb << endl;
	return 0;
}
