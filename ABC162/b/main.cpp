#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
  ll n;
  cin >> n;
  ll ans = 0;
  int i = 1;
  while (i != n + 1)
  {
    if (i % 3 != 0 && i % 5 != 0)
    {
      ans += i;
      i++;
    }else
        i++;
  }
  cout << ans << endl;
  return 0;
}