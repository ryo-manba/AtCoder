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

ll h [100010];
ll dp[100010];

int main()
{
  int n, k; 
  cin >> n >> k;
  rep(i, n) cin >> h[i];
  rep(i, 100010) dp[i] = INF;
  dp[0] = 0;

  rep(i,n){
    for(int j = 1; j <= k; j++){
      chmin(dp[i + j], dp[i] + abs(h[i] - h[i + j]));
    }
  }
  cout << dp[n - 1] << endl;
  return 0;
}