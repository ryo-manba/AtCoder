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
    int n, m, k;
    cin >> n >> m;
    vector<int> a(m), b(m);
    rep(i,m) cin >> a[i] >> b[i];
    cin >> k;
    vector<int> c(k), d(k);
    rep(i,k) cin >> c[i] >> d[i];

    int ans = 0;
    int k2 = 1<<k; // 2^k
    rep(s,k2)
    {
        vector<int> dish(n + 1);
        rep(i,k) 
        {
            if (s>>i & 1) dish[d[i]]++;
            else dish[c[i]]++;
        }
        int now = 0;
        rep(i,m)
        {
            if (dish[a[i]] == 0) continue;
            if (dish[b[i]] == 0) continue;
            now++;
        }
        chmax(ans, now);
    }
    cout << ans << endl;
    return 0;
}