#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
  int h, n;
  cin >> h >> n;
  int a[n];
  int sum = 0;
  rep(i,n) 
  {
    cin >> a[i];
    sum += a[i];
  }
  if(h - sum <= 0)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return 0;
}