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

vector<ll> compress(vector<ll> a)
{
	ll n = a.size();
	map<ll,ll> mp;
	rep(i,n) mp[a[i]] = 0;
	int id = 1;
	for (auto& p : mp) p.second = id++;
	rep(i,n) a[i] = mp[a[i]];
	return a;
}

int main()
{
	ll h, w, n;
	cin >> h >> w >> n;
	vector<ll> a(n), b(n);
	rep(i,n) cin >> a[i] >> b[i];
	a = compress(a);
	b = compress(b);
	rep(i,n) cout << a[i] << " " << b[i] << endl;
	return 0;
}
