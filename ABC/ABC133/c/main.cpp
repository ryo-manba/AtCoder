#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;
const int INF = (int)1e9;
const ll INFL = (ll)1e15;
const int MOD = 1e9 + 7;
int dy[]={0, 0, 1, -1, 0};
int dx[]={1, -1, 0, 0, 0};
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

int main()
{
    ll l, r;
    cin >> l >> r;
    r = min(r, l + 2019);
    int ans = 2018; 
    for (ll i = l; i <= r; i++)
    {
        for (ll j = i + 1; j <= r; j++)
        {
            int x = i * j % 2019;
            ans = min(ans, x);
        }
    }
    cout << ans << endl;
    return 0;
}