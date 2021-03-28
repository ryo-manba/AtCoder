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
    int i = 0;
    int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0;
    while(s[i])
    {
        if (s[i] == 'A') a++;
        if (s[i] == 'B') b++;
        if (s[i] == 'C') c++;
        if (s[i] == 'D') d++;
        if (s[i] == 'E') e++;
        if (s[i] == 'F') f++;
        i++;
    }
    printf("%d %d %d %d %d %d\n",a, b, c, d, e, f);
    return 0;
}