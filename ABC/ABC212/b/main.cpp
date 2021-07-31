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
	int a, b, c, d;
	a = (s[0] - '0');
	b = (s[1] - '0');
	c = (s[2] - '0');
	d = (s[3] - '0');

	if (a == b && b == c && c == d)
		cout << "Weak" << endl;
	else if (a == 0 && b == 1 && c == 2 && d == 3)
		cout << "Weak" << endl;
	else if (a == 1 && b == 2 && c == 3 && d == 4)
		cout << "Weak" << endl;
	else if (a == 2 && b == 3 && c == 4 && d == 5)
		cout << "Weak" << endl;
	else if (a == 3 && b == 4 && c == 5 && d == 6)
		cout << "Weak" << endl;
	else if (a == 4 && b == 5 && c == 6 && d == 7)
		cout << "Weak" << endl;
	else if (a == 5 && b == 6 && c == 7 && d == 8)
		cout << "Weak" << endl;
	else if (a == 6 && b == 7 && c == 8 && d == 9)
		cout << "Weak" << endl;
	else if (a == 7 && b == 8 && c == 9 && d == 0)
		cout << "Weak" << endl;
	else if (a == 8 && b == 9 && c == 0 && d == 1)
		cout << "Weak" << endl;
	else if (a == 9 && b == 0 && c == 1 && d == 2)
		cout << "Weak" << endl;
	else
		cout << "Strong" << endl;
	return 0;
}
