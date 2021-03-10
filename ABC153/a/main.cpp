#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
  int h, a;
  cin >> h >> a;
  int ans = 0;
  while(h > 0)
  {
    h -= a;
    ans++;
  }
  cout << ans << endl;
  return 0;
}