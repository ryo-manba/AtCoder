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
    int n;
    cin >> n;
    vector<bool> dp(100100);
    dp[0] = 1;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        for (int j = 100 * 100; j >= x; j--)
        {
            if (dp[j - x])
            {
                dp[j] = true;
            }
        }
    }
    int ans = 0;
    for (int i = 100 * 100; i >= 0; i--)
    {
        if (i % 10 != 0 && dp[i])
        {
            cout << i << endl;
            return 0;
        }
    }
    cout << 0 << endl;
    return 0;
}