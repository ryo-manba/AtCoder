#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
  string s, t, u;
  int a, b;
  cin >> s >> t;
  cin >> a >> b;
  cin >> u;
  if (u == s)
    cout << a - 1 << " " << b << endl;
  else
    cout << a  << " " << b - 1 << endl;
  return 0;
}