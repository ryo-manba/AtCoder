#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  vector<int> a(n);
  for  (int i = 0; i < n; i++) cin >> a[i];

  sort(a.begin(), a.end());
  int ans = 0;
  for (int i = 0; i < n; i++){
    for (int j = 0; j < i; j++){
      for (int k = 0; k < j; k++){
        if (a[k] != a[j] && a[i] != a[j] && a[k] + a[j] > a[i]){
          ans++;
        }
      }
    }
  }
  cout << ans << endl;

  return 0;
}