#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
  int a, b, c;
  cin >> a >> b >> c;
  swap(a, b);
  swap(a, c);
  cout << a << " " << b << " " << c << endl;
  return 0;
}