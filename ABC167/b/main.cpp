#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
  int a, b, c, k;
  cin >> a >> b >> c >> k;
  int ans = 0;
  while (k != 0 && a != 0)
  {
    a--;
    k--;
    ans++;
  }
  while (k != 0 && b != 0)
  {
    b--;
    k--;
  }
  while (k != 0 && c != 0)
 {
    c--;
    k--;
    ans--;
  }
  cout << ans << endl;
  return 0;
}