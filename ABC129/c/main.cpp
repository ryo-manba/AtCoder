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
    int n, m;
    cin >> n >> m;
    vector<int> broken(n + 1);
    rep(i,m) 
    {
        int a;
        cin >> a;
        broken[a] = 1;
    }
    vector<int> dp(n + 2);
    dp[n] = 1;
    for (int i = n - 1; i >= 0; i--)
    {
        if (broken[i])
        {
            dp[i] = 0;
            continue;
        }
        dp[i] = (dp[i + 1] + dp[i + 2]) % MOD;
    }
    cout << dp[0] << endl;
    return 0;
}
