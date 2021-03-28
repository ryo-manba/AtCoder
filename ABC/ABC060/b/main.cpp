#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
  int a, b, c;
  cin >> a >> b >> c;
  int ans =0;
  for (int i = 1; i < b; i++)
  {
    if (a * i % b == c)
    {
      ans++;
      break;
    }
  }
  cout << (ans ? "YES" : "NO") << endl;
  return 0;
}