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
#define debug(var)  do{std::cout << #var << " : ";view(var);}while(0)
template<typename T> void view(T e){std::cout << e << std::endl;}
template<typename T> void view(const std::vector<T>& v){for(const auto& e : v){ std::cout << e << " "; } std::cout << std::endl;}
template<typename T> void view(const std::vector<std::vector<T> >& vv){ for(const auto& v : vv){ view(v); } }

int cnt = 0;
int ans = INF;
bool seen[10001000];


// xの値はnから減らしていく
void solve(int x, int a, int cnt)
{
	if (x == 1)
	{
		chmin(ans, cnt);
		return ;
	}
	seen[x] = true;
	if (x % a == 0 && seen[x / a] == false) // 割り切れる間は割り続ける
	{
		solve(x / a, a, cnt + 1);
	}

	string s = to_string(x);
	if (s[0] != '0' && s.size() > 1) // 割り切れない場合、別の操作を行う
	{
		s = s.substr(1) + s[0];
		int t = stoi(s);
		if (seen[t] == false)
		{
			solve(t, a, cnt + 1);
		}
	}
}

int main()
{
	int a, n;
	cin >> a >> n;
	solve(n, a, 0);

	if (ans == INF) cout << -1 << endl;
	else cout << ans << endl;

	return 0;
}

