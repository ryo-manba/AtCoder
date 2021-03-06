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

const int MAX_N = 110;
const int MAX_V = 100100;

int n;
ll w, weight[MAX_N], value[MAX_N];
ll dp[MAX_N][MAX_V];

int main()
{
    cin >> n >> w;
    rep(i,n) cin >> weight[i] >> value[i];
    rep(i, MAX_N) {
        rep(j, MAX_V) {
            dp[i][j] = INFL;
        }
    }

    dp[0][0] = 0;
    rep(i,n) {
        rep(sum_v, MAX_V) {
            if (sum_v - value[i] >= 0) 
                chmin(dp[i + 1][sum_v], dp[i][sum_v - value[i]] + weight[i]);
            chmin(dp[i + 1][sum_v], dp[i][sum_v]);
        }
    }
    ll res = 0;
    rep(sum_v, MAX_V) 
    {
        if (dp[n][sum_v] <= w)
            res = sum_v;
    }
    cout << res << endl;
    return 0;
 }   