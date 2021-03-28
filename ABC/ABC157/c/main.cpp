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
    int n, m;
    cin >> n >> m;
    vector<int> s(m), c(m);
    rep(i,m) cin >> s[i] >> c[i];
    rep(i, 1000)
    {
        string str = to_string(i);
        if (str.size() != n) continue;
        bool flag = true;
        rep(i,m)
        {
            if (str[s[i] - 1] != c[i] + '0')
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            cout << i << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}