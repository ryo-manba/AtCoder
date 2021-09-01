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

int h, w;
string s[2020];
int	cnt[2020][2020];

int main()
{
	cin >> h >> w;
	rep(i,h) cin >> s[i];

	rep(i,h)
	{
		vector<int> done(w);
		rep(j,w)
		{
			if (s[i][j] == '#') continue;
			if (done[j]) continue;
			int l = 0;
			while (j + l < w) // 障害物が来るまで進める
			{
				if (s[i][j + l] == '#') break;
				l++;
			}
			rep(k,l)
			{
				cnt[i][j + k] += l;
				done[j + k] = 1; // 重複して同じマスを加算しなくなる
			}
		}
	}

	rep(j,w)
	{
		vector<int> done(h);
		rep(i,h)
		{
			if (s[i][j] == '#') continue;
			if (done[i]) continue;
			int l = 0;
			while (i + l < h) // 障害物が来るまで進める
			{
				if (s[i + l][j] == '#') break;
				l++;
			}
			rep(k,l)
			{
				cnt[i + k][j] += l;
				done[i + k] = 1; // 重複して同じマスを加算しなくなる
			}
		}
	}

	int ans = 0;
	rep(i,h) rep(j,w) chmax(ans, cnt[i][j]- 1);
	cout << ans << endl;
	return 0;
}
