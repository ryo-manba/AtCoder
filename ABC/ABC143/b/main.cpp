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

int main()
{
  int n, ans = 0;
  cin >> n;
  vector<int> d(n);
  rep(i,n) cin >> d[i];
  for(int i = 0; i < n - 1; i++){
    for(int j = i + 1; j < n; j++){
      ans += d[i] * d[j];
    }
  }
  cout << ans << endl;
  return 0;
}