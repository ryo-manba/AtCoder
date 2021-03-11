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

ll choose2(ll n)
{
    return n * (n - 1) / 2;
}

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> cnt(n);
    rep(i,n) 
    {
        cin >> a[i];
        a[i]--;
        cnt[a[i]]++;
    }

    ll sum = 0;
    rep(i,n)
    {
        sum += choose2(cnt[i]);
    }
    rep(i,n)
    {
        ll ans = sum;
        // 先にそのまま引いて、後から消した場合を足す
        ans -= choose2(cnt[a[i]]);
        ans += choose2(cnt[a[i]] - 1);
        cout << ans << endl;
    }
    return 0;
}