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
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    int aa = (10 - a % 10) % 10;
    int bb = (10 - b % 10) % 10;
    int cc = (10 - c % 10) % 10;
    int dd = (10 - d % 10) % 10;
    int ee = (10 - e % 10) % 10;
    
    int ans = a + b + c + d + e;
    ans += aa + bb + cc + dd + ee;
    ans -= max({aa, bb, cc, dd, ee});
    cout << ans << endl;
    return 0;
}