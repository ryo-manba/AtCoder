#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
  ll x;
  cin >> x;
  ll n = 100;
  int count = 0;
  while (n < x)
  {
    n += n / 100;
    count++;
  }
  cout << count << endl;
  return 0;
}