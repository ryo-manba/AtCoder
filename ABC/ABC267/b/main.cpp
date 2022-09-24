// #pragma GCC target ("avx2")
// #pragma GCC optimization ("O3")
// #pragma GCC optimization ("unroll-loops")
#include <bits/stdc++.h>
#define rep1(n)       for (int rep1_i = 0; rep1_i < n; rep1_i++)
#define rep2(i, n)    for (int i = 0; i < n; i++)
#define rep3(i, m, n) for (int i = m; i <= n; i++)
#define overload3(o1, o2, o3, name, ...) name
#define rep(...) overload3(__VA_ARGS__, rep3,rep2,rep1)(__VA_ARGS__)
#define INF ((1<<30)-1)
#define INFL ((1LL<<62)-1)
#define MOD 998244353
using namespace std;
using ll = long long;
using ld = long double;
using pll = pair<ll, ll>;
struct fast_ios { fast_ios(){ cin.tie(nullptr), ios::sync_with_stdio(false), cout << fixed << setprecision(20); }; } fast_ios_;
int dx[]={0, 0, -1, 1};
int dy[]={1, -1, 0, 0};
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
#define debug(var)  do{std::cout << #var << " : ";view(var);}while(0)
template<typename T> void view(T e){std::cout << e << std::endl;}
template<typename T> void view(const std::vector<T>& v){for(const auto& e : v){ std::cout << e << " "; } std::cout << std::endl;}
template<typename T> void view(const std::vector<std::vector<T> >& vv){ for(const auto& v : vv){ view(v); } }

#define DOWN false
#define UP true
bool solve() {
	string s;
	cin >> s;

	if (s[0] == '1') return false;

	vector<bool> v(11, UP);
	rep(i,s.size()) {
		// 倒れている
		if (s[i] == '0') v[i+1] = DOWN;
	}

	// どっちも倒れていなかったら倒れていない
	if (!(v[2] == DOWN && v[8] == DOWN)) v[2] = UP;
	if (!(v[3] == DOWN && v[9] == DOWN)) v[3] = UP;

	// 7,4,2,5,3,6,10
	vector<int> idx;
	//見ていく順番
	idx.push_back(7);
	idx.push_back(4);
	idx.push_back(2);
	idx.push_back(5);
	idx.push_back(3);
	idx.push_back(6);
	idx.push_back(10);

	rep(i,idx.size()) {
		// 立っている
		if (v[idx[i]] == UP) {
			bool f = UP;
			for (int j = i + 1; j < idx.size(); j++) {
				// 途中に倒れているピンがある
				if (v[idx[j]] == DOWN) {
					f = DOWN;
					continue;
				}
				// 途中に倒れているピンがあった場合
				if (v[idx[j] == UP] && f == DOWN) return true;
			}
		}
	}
	return false;
}

int main()
{
	cout << (solve() ? "Yes" : "No") << endl;
	return 0;
}
