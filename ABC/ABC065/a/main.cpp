#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
  int x, a, b;
  cin >> x >> a >> b;
  if (a >= b)
    cout << "delicious";
  else if (b > a + x)
    cout << "dangerous";
  else
    cout << "safe";
  return 0;
}