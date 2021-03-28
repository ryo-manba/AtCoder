#include <bits/stdc++.h>
using namespace std;

int main() 
{
  long a, b, c, d;
  cin >> a >> b >> c >> d;
  long ans1, ans2, ans3, ans4;
  ans1 = a * c;
  ans2 = a * d;
  ans3 = b * c;
  ans4 = b * d;
  ans1 = max({ans1, ans2, ans3, ans4});
  cout << ans1 << endl;
  return (0);
}