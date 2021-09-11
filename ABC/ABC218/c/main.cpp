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
	int n, k, l;
	cin >> n;
	vector<string> s(n), t(n);
	rep(i,n) cin >> s[i];
	rep(i,n) cin >> t[i];

	bool flag = true;
	rep(i,n)
	{
		rep(j,n)
		{
			if (s[i][j] == '#' && t[i][j] == '#')

			if (s[i][j] != t[i][j]) flag = false;
		}
		if (flag == false) break ;
	}
	if (flag == true)
	{
		cout << "Yes" << endl;
		return 0;
	}

	flag = true;
	k = n - 1;
	rep(i,n)
	{
		rep(j,n)
		{
			if (s[i][j] != t[i][k])
			{
				flag = false;
				break ;
			}
		}
		if (flag == false) break ;
		k--;
	}
	if (flag == true)
	{
		cout << "Yes" << endl;
		return 0;
	}

	flag = true;
	k = n - 1;
	rep(i,n)
	{
		l = n - 1;
		rep(j,n)
		{
			if (s[i][j] != t[k][l])
			{
				flag = false;
				break;
			}
			l--;
		}
		if (flag == false) break;
		k--;
	}

	if (flag == true)
	{
		cout << "Yes" << endl;
		return 0;
	}

	flag = true;
	k = n - 1;
	l = 0;
	rep(i,n)
	{
		rep(j,n)
		{
			if (s[i][j] != t[k][l])
			{
				flag = false;
				break ;
			}
			k--;
		}
		if (flag == false) break;
		l++;
	}
	if (flag == true)
	{
		cout << "Yes" << endl;
		return 0;
	}
	cout << "No" << endl;
	return 0;
}
