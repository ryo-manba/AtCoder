#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
  string s, ans;
  cin >> s;
  if (s[0] == s[2])
    ans = "Yes";
  else
    ans = "No";
  cout << ans << endl;
  return 0;
}