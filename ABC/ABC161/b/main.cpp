#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
  int n, m;
  cin >> n >> m;
  vector<double> a(n);
  double ans = 0;
  rep(i,n) 
  {
    cin >> a[i];
    ans += a[i];
  }
  sort(a.begin(), a.end(), greater<double>()); 
  double check = ans / (4 * m);
  rep(i, m)
  {
    if (check > a[i])
    {
       cout << "No" << endl;
       return 0;
    }
  }
  cout << "Yes" << endl;
  return 0;
}