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
/*************** using variables **************/
int n;
string s;
/**********************************************/

int main()
{
  int a, b;
  cin >> a >> b;
  if ((a == 1 && b == 2) || (a == 2 && b == 1))
    cout << 3;
  else if ((a == 1 && b == 3) || (a == 3 && b == 1))
    cout << 2;
  else
    cout << 1;
  cout << endl;
  return 0;
}