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
    ll n, a, b, c, d, e;
    cin >> n >> a >> b >> c >> d >> e;
    ll mini = min({a, b, c, d, e});
    if (n < mini)
    {
        cout << 5 << endl;
        return 0;
    }
    else if (mini == 1)
        n = n / mini + 4;
    else
        n = n / mini + 5;
    cout << n << endl;
    return 0;
}
