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

ll solve(ll a, ll b)
{
    ll x;
    x = (a - b) * (a - b);
    return x;
}

int main()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    set<ll> st;
    ll maxi = 0;
    rep(i,n) 
    {
        cin >> a[i];
        st.insert(a[i]);
        chmax(maxi, a[i]);
    }

    ll ans = INFL;
    if (st.size() == 1)
    {
        cout << 0 << endl;
        return 0;
    }
    for (ll i = -100; i <= 100; i++)
    {
        ll tmp = 0;
        for (ll j = 0; j < n; j++)
        {
            tmp += solve(a[j], i);
        }
        chmin(ans, tmp);
    }

    cout << ans << endl;
    return 0;
}