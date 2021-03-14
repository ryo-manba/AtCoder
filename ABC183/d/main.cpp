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
    ll n, w;
    cin >> n >> w;
    vector<ll> d(200000); 
    rep(i,n) 
    {
        ll s, t, p;
        cin >> s >> t >> p;
        d[s] += p;
        d[t] -= p;
    }
    rep(i,n) d[i + 1] += d[i];
    rep(i,n + 1)
    {
        if (d[i] > w)
        {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}