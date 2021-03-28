#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
  int n, a;
  cin >> n >> a;
  while (n >= 500)
    n -= 500;

  while (n != 0 && a != 0)
  {
     n--;
     a--;
  }
  if (n == 0)
    cout << "Yes";
  else
    cout << "No";
  cout << endl;
  return 0;
}