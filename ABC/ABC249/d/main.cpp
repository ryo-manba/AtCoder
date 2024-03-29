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

/**
 * 1以上のN以下のi,j,kの組
 * Ai / Aj = Ak
 *
 * つまり
 * Ai % Aj == 0 && Ai / Aj == Akの組み合わせ
 *
 * やるべき
 * Ai >= Aj
 * 重複している数字はその分倍にする
 */

/*  divisor(n)
    入力：整数 n
    出力：nのすべての約数
    計算量：O(√n)
*/
vector<long long> divisor(long long n) {
    vector<long long> ret;
    for (long long i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            ret.push_back(i);
            if (i * i != n) ret.push_back(n / i);
        }
    }
    return ret;
}

int main()
{
	ll n;
	cin >> n;
	set<ll, std::greater<ll>> st;

	map<ll,ll> mp;
	rep(i,n)
	{
		ll a;
		cin >> a;
		st.insert(a);
		mp[a] += 1;
	}

	ll ans = 0;
	for (auto it = st.begin(); it != st.end(); ++it)
	{
		vector<ll> v = divisor(*it);
		rep(i,v.size())
		{
			ll t = (*it) / v[i];
			ans += mp[t] * mp[*it] * mp[v[i]];
		}
	}

	cout << ans << endl;
	return 0;
}
