#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
  string a, b, c;
  cin >> a >> b >> c;
  int a1, b1;
  a1 = a.length();
  b1 = b.length();
  if (a[a1 - 1] == b[0] && b[b1 - 1] == c[0])
    cout << "YES";
  else
    cout << "NO";
  cout << endl;
  return 0;
}