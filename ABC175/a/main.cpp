#include <bits/stdc++.h>
using namespace std;

int main() 
{
  string s;
  cin >> s;
  int count = 0, max = 0;
  for (int i = 0; i < 3; i++)
  {
  	if (s[i] == 'R')
    {
      count++;
      if (max < count)
        max = count;
    }
    else
      count = 0;
  }
  cout << max << endl;
  return 0;
}