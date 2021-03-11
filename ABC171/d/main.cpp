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
    ll n;
    cin >> n;
    vector<ll> a(n);
    map<ll, ll> mp;
    ll sum = 0;
    rep(i,n) 
    {
        cin >> a[i];
        sum += a[i];
        mp[a[i]]++;
    }
    int q; 
    cin >> q;
    vector<ll> b(q), c(q);
    vector<ll> ans(q);
    rep(i,q)
    {
        cin >> b[i] >> c[i];
        ll dif = c[i] - b[i];
        sum += mp[b[i]] * dif;
        ans[i] = sum;
        mp[c[i]] += mp[b[i]];
        mp[b[i]] = 0;
    }
    rep(i, q)
    {
        cout << ans[i] << endl;
    }
    return 0;
}