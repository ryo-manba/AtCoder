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

double f(double x1, double x2, double y1, double y2)
{
	return (sqrt(((x2 - x1)* (x2 - x1)) + ((y2 - y1) * (y2 - y1))));
}

int main()
{
	int n;
	cin >> n;
	vector<int> x(n), y(n);
	rep(i,n) cin >> x[i] >> y[i];

	double ans = 0;
	rep(i,n)
	{
		for (int j = i + 1; j < n; j++)
		{
			chmax(ans, f(x[i], x[j], y[i], y[j]));
		}
	}
	cout << ans << endl;
	return 0;
}

