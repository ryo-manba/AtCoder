#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
  int n;
  cin >> n;
  int count = 0;
  vector<int> x(n), y(n);
  rep(i,n)
  {
    cin >> x[i] >> y[i];
  } 
  rep(i, n)
  {
    for(int j = i + 1; j < n; j++)
    {
      double ans = (double)(y[j] - y[i]) / (x[j] - x[i]);
      if (ans >= -1 && ans <= 1)
        count++;
    }
  }
  cout << count << endl;
  return 0;
}