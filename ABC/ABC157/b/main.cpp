#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;


int main()
{
  bool check[3][3];
  int a[3][3];
  rep(i,3){
    rep(j,3){
      cin >> a[i][j];
      check[i][j] = false;
    }
  }
  int n;
  cin >> n;
  int b[n];
  rep(i,n) cin >> b[i];

  rep (i,3){
    rep (j,3){
      rep (k,n){
        if (a[i][j] == b[k])
          check[i][j] = true;
      }
    }
  }
  string ans = "No";
  rep (i,3)
  {
    if (check[i][0] and check[i][1] and check[i][2]) 
      ans = "Yes";
  }
  rep (i,3)
  {
     if (check[0][i] and check[1][i] and check[2][i]) 
      ans = "Yes";
  }
  if (check[0][0] and check[1][1] and check[2][2]) 
      ans = "Yes";
  if (check[0][2] and check[1][1] and check[2][0])
      ans = "Yes";   
  cout << ans << endl; 
  return 0;
}