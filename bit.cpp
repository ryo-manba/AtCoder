#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main(){
  int n, w;
  cin >> n >> w;
  int a[n];
  rep(i,n) cin >> a[i];
  for (int s = 0; s < (1 << n); s++){
    int sum = 0;
    for (int i = 0; i < n; i++){
      if (s & (1 << i)){  
        sum += a[i];
      }
    }
   if (sum == w){
      cout << "OK" << endl;
      return 0;
    }
  }
  cout << "zannnenn" << endl;
  return 0;
}
