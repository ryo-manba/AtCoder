#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
  int k, a, b;
  int i = 1;
  cin >> k;
  cin >> a >> b;

  while (a != b)
  {
    if (a % k == 0)
    {
      cout << "OK" << endl;
      return 0;
    }
    a++;
  }
  if (a % k == 0)
    cout << "OK" <<endl;
  else
    cout << "NG" << endl;
  return 0;
}