#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;
  
  int main() 
  {
    int n;
    cin >> n;
    int min = 10000000;
    int a[n];
    rep(i,n) cin >> a[i];
    rep(i,n)
    {
      int count = 0;
      while(a[i] % 2 == 0)
      {
        a[i] /= 2;
        count++;
      }
      if (count < min)
        min = count;
    }
    cout << min << endl;
  }