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
    vector<int> a(n);
    ll ans = 0, sum = 0;
    map<int, int> mp;
    rep(i,n)
    {
        cin >> a[i];
        mp[a[i]]++;
    }
    for (int i = -200; i <= 200; i++)
    {
        for (int j = i + 1; j <= 200; j++)
        {
            sum = (i - j) * (i - j);
            ans += sum * mp[i] * mp[j];
        }
    }
    cout << ans << endl;
    return 0;
}