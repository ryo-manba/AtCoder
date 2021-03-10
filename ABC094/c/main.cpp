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
    vector<ll> x(n);
    rep(i,n) cin >> x[i];

    auto a = x;
    sort(x.begin(), x.end());
    ll mid = n / 2;
    ll mini = x[mid - 1];
    ll maxi = x[mid];

    rep(i,n)
    {
        if (a[i] < maxi)
            cout << maxi << endl;
        else
            cout << mini << endl;
    }
    return 0;
}