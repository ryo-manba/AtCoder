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
	string x;
	int n;
	cin >> x;
	cin >> n;
	vector<string> s(n);
	rep(i,n) cin >> s[i];
	map<char, int> mp;
	rep(i, (int)x.size()) mp[x[i]] = i;
	vector<pair<string, int>> p(n);
	rep(i,n)
	{
		string tmp = "";
		rep(j,s[i].size())
		{
			tmp += mp[s[i][j]] + 'a';
		}
		p[i] = {tmp,i};
	}
	sort(p.begin(), p.end());
	rep(i,n) cout << s[p[i].second] << endl;
	return 0;
}
