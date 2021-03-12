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
    int n;
    cin >> n;
    vector<ll> a(n), b(n);
    vector<ll> dec(n); 
    ll sum = 0;
    rep(i,n) 
    {
        cin >> a[i] >> b[i];
        sum += a[i];
        dec.push_back(2 * a[i] + b[i]);
    }
    sort(dec.rbegin(), dec.rend());
    int ans = 0;
    while (sum >= 0)
    {
        sum -= dec[ans];
        ans++;
    }
    cout << ans << endl;
    return 0;
}