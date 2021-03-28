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
    ll n, m;
    cin >> n >> m;
    ll ans = 0;
    if (n >= m)
    {
        cout << m / 2 << endl;
        return 0;
    }
    else
    {
        m -= n * 2;
        ans = m / 4;
    }
    cout << ans + n << endl;
    return 0;
}