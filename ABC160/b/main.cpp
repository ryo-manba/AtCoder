#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
  int a;
  cin >> a;
  int ans = 0;
  while (a >= 500)
  {
    a -= 500;
    ans += 1000;
  }
  while (a >= 5)
  {
    a -= 5;
    ans += 5;
  }
  cout << ans << endl;
  return 0;
}