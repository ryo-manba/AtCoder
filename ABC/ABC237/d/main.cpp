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

int main()
{
	ll n;
	string s;
	cin >> n >> s;

	stack<ll> st;
	vector<ll>ans;
	st.push(0);
	for (int i=0; i < n; ++i)
	{
		if (s[i] == 'L')
		{
			st.push(i+1);
		}
		if (s[i] == 'R')
		{
			ans.push_back(st.top());
			st.pop();
			st.push(i+1);
		}
	}
	while (!st.empty())
	{
		ans.push_back(st.top());
		st.pop();
	}
	rep(i,n+1)
	{
		cout << ans[i];
		if (i < n)
			cout << " ";
	}
	cout << endl;
	return 0;
}

