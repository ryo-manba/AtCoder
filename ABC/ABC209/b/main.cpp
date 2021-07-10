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

// n個の商品, 定価a[i]
// 偶数だったら1円引き
// 所持金x円

int main()
{
	int n, x;
	cin >> n >> x;
	rep(i,n)
	{
		int a;
		cin >> a;
		if (i % 2 == 1)
			x -= a - 1;
		else
			x -= a;
	}
	if (x < 0)
		cout << "No" << endl;
	else
		cout << "Yes" << endl;
	return 0;
}
