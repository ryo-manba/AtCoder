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


const int SIZE = 1e6 + 1;
int main()
{
    ll n;
    cin >> n;
    vector<ll> s(SIZE);
    rep(i,n) 
    {
        ll a, b;
        cin >> a >> b;
        s[a]++;
        s[b + 1]--;
    }
    ll ans = s[0];
    rep(i,SIZE)
    {
        if (i)
        {
            s[i] += s[i - 1];
            chmax(ans, s[i]);
        }
    }
    cout << ans << endl;
    return 0;
}