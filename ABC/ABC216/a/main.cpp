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

int a, b, c;
string s, ss, sss;

int main()
{
	cin >> s;
	int len = s.size() - 2;
	a = s[s.size()-1] - '0';

	if (0 <= a && a <= 2) b = 1;
	else if (3 <= a && a <= 6) b = 2;
	else if (7 <= a && a <= 9) b = 3;

	rep(i, s.size() - 2)
	{
		cout << s[i];
	}
	if (b == 1) cout << "-" << endl;
	if (b == 2) cout << endl;
	if (b == 3) cout << "+" << endl;
	return 0;
}
