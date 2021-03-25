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
    ll x, y, a, b;
    cin >> x >> y >> a >> b;

    ll cnt = 0;
    while (1)
    {
        if (y / a < x) break;   // オーバーフローしないことを確認
        if (a * x >= y) break;
        if (a * x >= x + b) break;
        x *= a;
        cnt++;
    }
    cnt += (y - 1 - x) / b;
    cout << cnt << endl;
    return 0;
}