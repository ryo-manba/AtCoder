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

ll gcd(ll a, ll b)
{
  if (a % b == 0)
  {
    return (b);
  }
  else
  {
    return (gcd(b, a%b));
  }
}

ll lcm(ll a, ll b)
{
  return a * b /gcd(a, b);
}

int main()
{
  ll a, b;
  cin >> a >> b;
  cout <<  lcm(a, b) << endl;
  return 0;
}