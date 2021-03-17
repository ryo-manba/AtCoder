#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;
const int INF = (int)1e9;
const ll INFL = (ll)1e15;
const int MOD = 1e9 + 7;
int dy[]={0, 0, 1, -1, 0};
int dx[]={1, -1, 0, 0, 0};

int main()
{
  string s;
  cin >> s;
  int ans;
  if (s == "SUN") ans = 7;
  if (s == "MON") ans = 6;
  if (s == "TUE") ans = 5;
  if (s == "WED") ans = 4;
  if (s == "THU") ans = 3;
  if (s == "FRI") ans = 2;
  if (s == "SAT") ans = 1;
  
  cout << ans << endl;
  return 0;
}