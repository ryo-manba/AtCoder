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

int main()
	{
    int n;
    cin >> n;
	int same = 0;
    vector<pair<ll, ll>> p(n);
    for(auto& [x, y] : p) cin >> x >> y;
    for(int i = n; i--; ) for(int j = i; j--; ) for(int k = j; k--; ){
        auto [x1, y1] = p[i];
        auto [x2, y2] = p[j];
        auto [x3, y3] = p[k];
        x1 -= x3;
        x2 -= x3;
        y1 -= y3;
        y2 -= y3;

        if(x1 * y2 == x2 * y1){
			same++;
        }
    }
	ll ans = (n * (n - 1) * (n - 2)) / 6;
	ans -= same;
	cout << ans << endl;
	return 0;
}
