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

int main()
{
    string s;
    cin >> s;
    int ans = 0;
    rep(i, s.size() - 1)
    {
        if (s[i] == s[i + 1])
        {
            ans++;
            if (s[i + 1] == '0')
                s[i + 1] = '1';
            else
                s[i + 1] = '0';
        }
    }
    cout << ans << endl;
    return 0;
}
