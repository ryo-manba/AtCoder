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

vector<string> v;
int	sz;
int n;

bool yoko(int y, int x)
{
	if (x + 6 > sz) return false;

	int cnt = 0;
	for (int i = x; i < x + 6; ++i)
	{
		if (v[y][i] == '#') cnt += 1;
	}
	if (cnt >= 4) return true;
	return false;
}

bool tate(int y, int x)
{
	if (y + 6 > n) return false;

	int cnt = 0;
	for (int i = y; i < y + 6; ++i)
	{
		if (v[i][x] == '#') cnt += 1;
	}
	if (cnt >= 4) return true;
	return false;
}

// [/]
bool naname_migi(int y, int x)
{
	if (y - 5 < 0 || x + 6 > sz) return false;

	int cnt = 0;
	for (int i = y, j = x; i > y - 6 && j < sz + 6; --i, ++j)
	{
		if (v[i][j] == '#') cnt += 1;
	}
	if (cnt >= 4) return true;
	return false;
}

// [\]
bool naname_hidari(int y, int x)
{
	if (y - 5 < 0 || x - 5 < 0) return false;

	int cnt = 0;
	for (int i = y, j = x; i > y - 6 && j > x - 6; --i, --j)
	{
		if (v[i][j] == '#') cnt += 1;
	}
	if (cnt >= 4) return true;

	return false;
}

int main()
{
	cin >> n;
	int ans = 0;

	rep(i,n)
	{
		string s;
		cin >> s;
		v.push_back(s);
	}
	sz = v[0].size();
	rep(i,n)
	{
		rep(j,sz)
		{
			ans += yoko(i, j);
			ans += tate(i, j);
			ans += naname_migi(i, j);
			ans += naname_hidari(i,j);
		}
	}
	if (ans) cout << "Yes" << endl;
	else cout << "No"  << endl;
	return 0;
}

