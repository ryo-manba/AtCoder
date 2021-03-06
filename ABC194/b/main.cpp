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
    ll n;
    cin >> n;
    vector<ll> a(n), b(n);
    ll mini = INF,tmp = 0, maxi = 0;
    vector<ll> ans(n,INF);

    rep(i,n)
    {
         cin >> a[i] >> b[i];
         ans[i] = a[i] + b[i];
    }
    rep(i,n)
    {
        rep(j,n)
        {
            if (i == j)
            {
                chmin(ans[i],a[i] + b[j]);
            }
            else
            {
                chmin(ans[i],max(a[i], b[j]));
            }
        }
    }
    sort(ans.begin(), ans.end());
    cout << ans[0] << endl;
    return 0;
}
