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
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

int main()
{
    int n; 
    string s;
    cin >> n >> s;

    int ans = 0;
    for (int i = 1; i < n; i++)
        if (s[i] == 'E') ans++;

    int c = ans;
    for (int i = 1; i < n; i++)
    {
        if (s[i] == 'E') 
            c--;
        if (s[i - 1] == 'W')
            c++;
        chmin(ans, c);
    }
    cout << ans << endl;
    return 0;
}