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
    vector<ll> a(n);
    vector<ll> s(n + 2); 
    rep(i,n)
    {
        cin >> a[i];
        s[i + 1] = s[i] + a[i]; 
    }
    ll mini = INFL;
    for (int i = 1; i < n; i++)
    {
        ll tmp = abs(s[i] - (s[n] - s[i]));
        chmin(mini, tmp);
    }
    cout << mini << endl;
    return 0;
}