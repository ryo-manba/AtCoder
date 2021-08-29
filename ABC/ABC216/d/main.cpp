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

int n, m;
queue<int> que;
vector<queue<int>> vecque;
vector<vector<int>> vec;

int main()
{
	cin >> n >> m;
	vecque.resize(m);
	vec.resize(n);
	rep(i,m)
	{
		int k;
		cin >> k;
		rep(j,k)
		{
			int a;
			cin >> a;
			vecque[i].push(a - 1);
		}
		vec[vecque[i].front()].push_back(i);
	}
	rep(i,n)
	{
		if (vec[i].size() == 2)
			que.push(i);
	}
	while (!que.empty())
	{
		int now = que.front(); que.pop();
		for (auto p : vec[now])
		{
			vecque[p].pop();
			if (!vecque[p].empty())
			{
				vec[vecque[p].front()].push_back(p);
				if (vec[vecque[p].front()].size() == 2)
					que.push(vecque[p].front());
			}
		}
	}
	for (auto p : vecque)
	{
		if (!p.empty())
		{
			cout << "No" << endl;
			return 0;
		}
	}
	cout << "Yes" << endl;
	return 0;
}
