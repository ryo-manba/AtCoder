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

int main()
{
    int n;
    cin >> n;
    ll b[n] = {100010};
    rep(i, n - 1) cin >> b[i];
    int ans = b[0] + b[n - 2];
    rep(i, n - 2)
    {
        ans += min(b[i], b[i + 1]);
    }
    cout << ans << endl;
    return 0;
}
