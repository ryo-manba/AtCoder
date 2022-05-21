#include <bits/stdc++.h>
#define rep1(n)       for (int rep1_i= 0; rep1_i < n; rep1_i++)
#define rep2(i, n)    for (int i = 0; i < n; i++)
#define rep3(i, m, n) for (int i = m; i < n; i++)
#define overload3(o1, o2, o3, name, ...) name
#define rep(...) overload3(__VA_ARGS__, rep3,rep2,rep1)(__VA_ARGS__)
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


ll vec[1000][110];

int main()
{
	int n;
	cin >> n;
	vector<string> s(n);
	rep(i,n) cin >> s[i];

	// 数字, index, 個数
	map<map<ll, ll>, ll> mp;

	rep(i,n)
	{
		rep(j, 10)
		{
			vec[s[i][j]-'0'][j] += 1;
		}
	}
	ll mini = INFL;
	rep(i,10)
	{
		ll cnt = 0;
		rep(j,10)
		{
			chmax(cnt, vec[i][j]);
		}
		ll a = 0;
		rep(j,10)
		{
			if (vec[i][j] == cnt)
			{
				chmax(a, j + (10 * (cnt-1)));
			}
		}
		chmin(mini, a);
	}
	cout << mini << endl;
	return 0;
}

