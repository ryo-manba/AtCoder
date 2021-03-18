#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
  ll a, b, c;
  cin >> a >> b >> c;
  if (a <= c)
   {
      c -= a;
      a = 0;
   }
   else if (a > c)
   {
    a -= c;
    cout << a << " " <<  b << endl;
    return 0;
  }
   if (b < c)
   {
      b = 0;
   }
   if (b >= c)
     b -= c;
   cout << a << " " <<  b << endl;
  return 0;
}