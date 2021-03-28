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

ll h[100010];
ll dp[100010];

ll rec(int i) 
{
  if (dp[i] < INF) return dp[i];
  if (i == 0) return 0;
  ll res = INF;
  chmin(res, rec(i - 1) + abs(h[i] - h[i - 1]));
  if (i > 1) chmin(res, rec(i - 2) + abs(h[i] - h[i - 2]));

  return dp[i] = res;
}

int main()
{
  int n;
  cin >> n;
  rep(i,n) cin >> h[i];
  rep(i, 100010) dp[i] = INF;

  cout << rec(n - 1) << endl;
  return 0;
}