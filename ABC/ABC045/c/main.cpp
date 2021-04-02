#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;
struct fast_ios { fast_ios(){ cin.tie(nullptr), ios::sync_with_stdio(false), cout << fixed << setprecision(20); }; } fast_ios_;
const int INF = (int)1e9;
const ll INFL = (ll)1e18;
const int MOD = 1e9 + 7;
const double EPS = 1e-10;
int dx[]={0, 0, -1, 1};
int dy[]={1, -1, 0, 0};
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

ll solve(string s)
{
    ll cur = 0, res = 0;
    rep(i, s.size())
    {
        if (s[i] == '+')
        {
            res += cur;
            cur = 0;
        }
        else
            cur = cur * 10 + (s[i] - '0');
    }
    res += cur;
    return res;
}

int main()
{
    string s;
    cin >> s;
    ll ans = 0;
    rep(i, 1 << s.size() - 1)
    {
        string tmp = "";
        rep(j, s.size() - 1)
        {
            tmp += s[j];
            if (i >> j & 1)
            {
                tmp += '+';
            }
        }
        tmp += s[s.size() - 1];
        ans += solve(tmp);
    }
    cout << ans << endl;
    return 0;
}