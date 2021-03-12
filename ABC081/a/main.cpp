#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
  string s;
  cin >> s;
  int count = 0;
  int i = 0;
  while(i < 3)
  {
    if (s[i] == '1')
      count++;
    i++;
  }
  cout << count << endl;
  return 0; 
}