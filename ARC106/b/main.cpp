#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;
struct fast_ios { fast_ios(){ cin.tie(nullptr), ios::sync_with_stdio(false), cout << fixed << setprecision(20); }; } fast_ios_;
const int INF = (int)1e9;
const ll INFL = (ll)1e15;
const int MOD = 1e9 + 7;
const double EPS = 1e-8;
int dx[]={0, 0, -1, 1};
int dy[]={1, -1, 0, 0};
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

int main()
{
    int n, m;
    cin >> n >> m;
    vector<ll> a(n),b(n);
    vector<int> c(m), d(m);
    vector<bool> ok(n, false);
    rep(i,n) cin >> a[i];
    rep(i,n) cin >> b[i];

    rep(i,m) 
    {
        cin >> c[i] >> d[i];
        c[i]--; d[i]--;
        ok[c[i]] = true;
        ok[d[i]] = true;
    }

    // a と b の差を取る
    vector<ll> diff(n);
    ll sum = 0;
    rep(i,n) 
    {
        diff[i] = a[i] - b[i];
        sum += diff[i];
        if (diff[i] != 0 && ok[i] == false)
        {
            cout << "No" << endl;
            return 0;
        }
    }
    
    if (sum == 0)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}