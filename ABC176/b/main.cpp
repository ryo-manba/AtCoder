#include <bits/stdc++.h>
using namespace std;

int main() 
{
  string n;
  cin >> n;
  int ans = 0, box = 0;
  for (int i = 0; i < n.size(); i++)
  {
    ans = (n[i] - '0');
    box += ans;
  } 
  if (box % 9 == 0)
    cout << "Yes" << endl;
  else 
    cout << "No" << endl;
  return (0);
}