#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
  int n;
  string s;
  cin >> n;
  n = n % 10;
  if (n == 0 || n == 1 || n == 6 || n == 8)
    s = "pon";
  else if (n == 3)
    s = "bon";
  else
    s = "hon";
  cout << s << endl;
  return 0;
}