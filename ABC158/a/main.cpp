#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
  string s;
  cin >> s;
  int a = 0;
  int b = 0;
  int i = 0;
  while(s[i])
  {
   if (s[i] == 'B')
     b++;
   else
     a++;
    i++;
  }
  if (a == 0 || b == 0)
    cout << "No" << endl;
  else
    cout << "Yes" << endl;
  return 0;
}