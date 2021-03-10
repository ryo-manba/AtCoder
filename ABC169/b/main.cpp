#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main(){
  int n;
  cin >> n;
  ll ans = 1;
  bool ng = false;
  ll max = 10;
  for (int i = 0; i < 17; i++)
    max *= 10;
  rep(i,n){
    ll a;
    cin >> a;
    if (a == 0){
      cout << 0 << endl;
      return 0;
    }
    if (ng || max / ans < a){
    ng = true;
  }
  ans *= a;
}
if (ng) cout << -1 << endl;
else cout << ans << endl;
return 0;
}