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
    int R, C, K, N;
    cin >> R >> C >> K;
    cin >> N;
    vector<int> r(100100), c(100100), X(100100), Y(100100);
    vector<P> p(N);
    map<int, int> mp;
    rep(i,N) 
    {
        cin >> r[i] >> c[i];
        r[i]--;
        c[i]--;
        X[r[i]]++;     // 飴の個数を縦横で記録した配列を作る.
        Y[c[i]]++;
    }
    
    rep(i,C) mp[Y[i]]++;
    ll ans = 0;
    rep(i,R) ans += mp[K - X[i]];
    rep(i,N)
    {
        if (X[r[i]] + Y[c[i]] == K + 1)     // 起点のマスに飴がある場合はカウントがずれる.
            ans++;
        if (X[r[i]] + Y[c[i]] == K)     // 余計にカウントしている.
            ans--;
    }

    cout << ans << endl;
    return 0;
}