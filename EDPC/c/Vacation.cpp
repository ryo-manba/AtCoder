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
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

ll h [100010][3];
ll dp[100010][3];

int main()
{
  int n;
  cin >> n;
  rep(i,n){
    rep(j,3){
      cin >> h[i][j];
    }
  }
  rep(i,n){
    rep(j,3){
      rep(k,3){
        if (j == k) continue;
        chmax(dp[i + 1][k], dp[i][j] + h[i][k]);
      }
    }
  }
  ll res = 0;
  rep(i,3) chmax(res, dp[n][i]);
  cout << res << endl;
  return 0;
}