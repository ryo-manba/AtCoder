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
	map<string, int>mp;
	mp["ABC"] = 1;
	mp["ARC"] = 1;
	mp["AGC"] = 1;
	mp["AHC"] = 1;

	string s1, s2, s3;
	cin >> s1 >> s2 >> s3;
	mp[s1]--;
	mp[s2]--;
	mp[s3]--;

	if (mp["ABC"] == 1) cout << "ABC" << endl;
	if (mp["ARC"] == 1) cout << "ARC" << endl;
	if (mp["AGC"] == 1) cout << "AGC" << endl;
	if (mp["AHC"] == 1) cout << "AHC" << endl;
	return 0;
}
