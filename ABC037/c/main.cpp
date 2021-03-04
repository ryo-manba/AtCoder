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
    int n, k;
    cin >> n >> k;
    vector<ll> a(n);
    rep(i,n) cin >> a[i];
    vector<ll> s(n + 1, 0);
    for (int i = 0; i < n; i++)
    {
        s[i + 1] = s[i] + a[i];
    }
    ll ans = 0;
    for (int i = 0; i + k <= n; i++)
    {
        ans += s[i + k] - s[i];
    }
    cout << ans << endl;
    return 0;
}
