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
	string s, t;
	cin >> s >> t;
	if (s == t)
	{
		cout << "Yes" << endl;
		return 0;
	}
	int f = 0;
	rep(i,s.size())
	{
		if (s[i] != t[i])
			f += 1;
	}
	if (f == 0)
	{
		cout << "Yes" << endl;
		return 0;
	}
	if (f != 2)
	{
		cout << "No" << endl;
		return 0;
	}
	rep(i,s.size())
	{
		if (s[i] != t[i])
		{
			if (s[i+1] == t[i] && s[i] == t[i+1])
			{
				cout << "Yes" << endl;
				return 0;
			}
		}
	}
	cout << "No" << endl;
	return 0;
}
