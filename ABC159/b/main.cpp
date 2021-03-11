#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
  string s;
  cin >> s;
  int start, end;
  start = (s.size() - 1) / 2;
  end = (s.size() + 3) / 2;
  if (s.substr(0,start) == s.substr(end - 1))
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return 0;
}