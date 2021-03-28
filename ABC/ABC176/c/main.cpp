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

int main()
{
  ll n;
  cin >> n;
  vector<ll> a(n);
  rep(i,n) cin >> a[i];
  ll max = a[0];
  ll count = 0;
  for(ll i = 1; i < n; i++)
  {
    if(max > a[i])
    {
      while(max != a[i])
      {
        a[i]++;
        count++;
      }
    }
    else if(max < a[i])
      max = a[i];
    else 
      continue;
  }
  cout << count << endl;
  return 0;
}