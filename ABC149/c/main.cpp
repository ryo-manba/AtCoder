#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int prime(int a){
    if (a % 2 == 0)
      return 0;
    for(long i = 3; i * i <= a; i += 2)
      {
        if (a % i == 0)
          return 0;
      }
      return (1);
}
  
int main()
{
  int a;
  cin >> a;
  if (a <= 2)
  {
     cout << 2 << endl;
     return 0;
  }
  while (1)
  {
    if (prime(a))
      {
        cout << a << endl;
        return 0;
      }
    a++;
  }
  return 0;
}