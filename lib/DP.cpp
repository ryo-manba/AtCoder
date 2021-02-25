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
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main()
{
  int n;
  cin >> n;
  if (n <= 9)
    {
      cout << "Yes" << endl;
      return 0;
    }
  for(int i = 2; i <= 9; i++){
    for(int j = 2; j <= 9; j++){
        if(n == i * j){
          cout << "Yes" << endl;
          return 0;
      }
    }
  }
  cout << "No" << endl;
  return 0;
}