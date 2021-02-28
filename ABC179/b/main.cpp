#include <bits/stdc++.h>
using namespace std;

int main() 
{
  int n;
  cin >> n;
  int a[n][2];
  for (int i = 0; i < n; i++){
    for (int j = 0; j < 2; j++){
      cin >> a[i][j];
    }
  }
  int count = 0;
  for (int i = 0; i < n; i++){
    if (a[i][0] == a[i][1]){
      count++;
    if (count == 3) {
        cout << "Yes" << endl;
        return (0);
      }
    }
    else
      count = 0;
  }
  cout << "No" << endl;
  return (0);
}
