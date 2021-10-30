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
	int n;
	cin >> n;
	vector<int> a(n-1), b(n-1);
	rep(i,n-1) cin >> a[i] >> b[i];
	vector<list<int>> ls(n+1);

	rep(i,n-1)
	{
		ls[a[i]].push_back(b[i]);
		ls[b[i]].push_back(a[i]);
	}
	for (int i = 1; i <= n; i++) {
		if (ls[i].size() == n - 1) {
			map<int, int> mp;
			for (auto p : ls[i]) {
				mp[p]++;
			}
			for (int j = 1; j <= n; j++)
			{
				if (i != j && mp[j] != 1) break;
				if (j == n)
				{
					cout << "Yes" << endl;
					return 0;
				}
			}
		}
	}
	cout << "No" << endl;
	return 0;
}
