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

vector<pair<int,int>> vec;
bool used[20];
int a[20][20];
int n;

int calc()
{
	if (vec.size() == n)
	{
		int ret = 0;
		for (auto p : vec)
		{
			ret ^= (a[p.first][p.second]);
		}
		return ret;
	}

	int l = 0;
	for (int i = 1; i <= 2*n; i++)
	{
		if (!used[i])
		{
			l = i;
			break;
		}
	}
	used[l] = true;

	int ret = 0;
	for (int i = 1; i <= 2*n; i++)
	{
		if (!used[i])
		{
			vec.push_back({l, i});
			used[i] = true;
			chmax(ret, calc());
			vec.pop_back();
			used[i] = false;
		}
	}

	used[l] = false;
	return ret;
}

int main()
{
	cin >> n;
	for (int i = 1; i <= 2*n-1; i++)
	{
		for (int j = i+1; j <= 2*n; j++)
		{
			cin >> a[i][j];
		}
	}
	int ans = calc();
	cout << ans << endl;
	return 0;
}

