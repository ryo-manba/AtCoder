#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;
const int INF = (int)1e9;
const ll INFL = (ll)1e15;
const int MOD = 1e9 + 7;
int dx[]={0, 0, -1, 1};
int dy[]={1, -1, 0, 0};
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

int main()
{
    string s;
    cin >> s;
    string piano = "WBWBWB";
    int num = s.find(piano);
    string ans;
    if (num == 4 || num == 5 || num == 16 || num == 17) ans = "Do";
    if (num == 2 || num == 3 || num == 15 || num == 14) ans = "Re";
    if (num == 1 || num == 13) ans = "Mi";
    if (num == 0 || num == 11 || num == 12) ans = "Fa";
    if (num == 9 || num == 10) ans = "So";
    if (num == 7 || num == 8 || num == 19) ans = "La";
    if (num == 6 || num == 18) ans = "Si";
    cout << ans << endl;
    return 0;
}