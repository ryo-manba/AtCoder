#include <bits/stdc++.h>
using namespace std;

int main() 
{
  int h, w, min,n = 0;
  cin >> h >> w;
  int a[h][w];
  for (int i = 0; i < h; i++) {
  	for (int j = 0; j < w; j++) {
      cin >> a[i][j];
    }
  }
  min = a[0][0];
	for (int i = 0; i < h; i++) {
 	 	for (int j = 0; j < w; j++) {
    	  if(min > a[i][j])
            min = a[i][j];
    }
  }
  	for (int i = 0; i < h; i++) {
 	 	  for (int j = 0; j < w; j++) {
    	  if (min != a[i][j])
              n += -1 *(min - a[i][j]);
    }
  }
  cout << n << endl;
  return (0);
}