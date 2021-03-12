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
    vector<ll> a(n),sum(n);
    rep(i,n)
    {   
        cin >> a[i];
    }
    sort(a.rbegin(), a.rend());
    
    int i = 0;
    while(i < n - 1)
    {
        if (a[i] == a[i + 1])
        {
            sum[i] = a[i];
            i++;
        }
        i++;
    }
    sort(sum.rbegin(), sum.rend());
    ll ans = sum[0] * sum[1];
    cout << ans << endl;
    return 0;
}