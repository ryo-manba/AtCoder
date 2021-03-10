#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;
const int INF = (int)1e9;
const ll INFL = (ll)1e15;
const int MOD = 1e9 + 7;
int dx[]={0, 0, -1, 1};
int dy[]={1, -1, 0, 0};
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

int main()
{
    ll a;
    double b;
    cin >> a >> b;

    // ​0.01*100 = 0.9999999999... <= これをなくしたい（0.5でも0.001でも）
    ll bb = b * 100 + 0.5;
    ll ans = a * bb / 100;
    cout << ans << endl;
    return 0;
}