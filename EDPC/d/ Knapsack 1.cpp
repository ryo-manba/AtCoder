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
    int n;
    ll w, weight[110], value[110];
    ll dp [110][100100] = {0};

    cin >> n >> w;
    rep(i,n) cin >> weight[i] >> value[i];
    rep(i, n) {
        for (int sum_w = 0; sum_w <= w; sum_w++) {
            if (sum_w - weight[i] >= 0) {
                chmax(dp[i + 1][sum_w], dp[i][sum_w - weight[i]] + value[i]);
            }
            chmax(dp[i + 1][sum_w], dp[i][sum_w]);
        }
    }
    cout << dp[n][w] << endl;
    return 0;
}