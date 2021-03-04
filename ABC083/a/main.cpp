#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  int left = a + b;
  int right = c + d;
  if (left > right)
    cout << "Left";
  else if (left == right)
    cout << "Balanced";
  else
    cout << "Right";
  cout << endl;
  return 0;
}