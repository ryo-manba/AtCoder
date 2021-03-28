#include <bits/stdc++.h>
using namespace std;

int main() 
{
  int a;
  cin >> a;
  string 	s[a];
  int ac = 0, wa = 0, tle = 0, re = 0;
  for (int i = 0; i < a; i++){
    cin >> s[i];
  }
  for (int i = 0; i < a; i++){
    if (s[i] == "AC") ac++;
    if (s[i] == "WA") wa++;
    if (s[i] == "TLE") tle++;
    if (s[i] == "RE") re++;
  }
  cout << "AC" << " x " << ac << endl;
  cout << "WA" << " x " << wa << endl;
  cout << "TLE" << " x " << tle << endl;
  cout << "RE" << " x " << re << endl;
  return (0);
}