#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int mixnam(int n)
{
  int sum = 0;
  while (n > 0)
  {
    sum += n % 10;
    n /= 10;
  }
  return sum;
}

int main()
{
  int n, a, b;
  cin >> n >> a >> b;
  int total = 0;
  for (int i = 1; i <= n; i++)
  {
    int sum = mixnam(i);
    if (sum >= a && sum <= b)
      total += i;
  }
  cout << total << endl;
  return 0;
}