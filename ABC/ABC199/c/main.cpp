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

int main()
{
    int n, q;
    string s;
    bool flag = true;
    cin >> n >> s >> q;
    rep(i,q)
    {
        int t, a, b;
        cin >> t >> a >> b;
        if (t == 1)
        {
            a--;
            b--;
            if (flag)
                swap(s[a], s[b]);
            else
            {
                if (a < n) a += n;
                else    a -= n;
                if (b < n) b += n;
                else    b -= n;
                swap(s[a], s[b]);
            }
        }
        else
            flag = !flag;
    }
    if (!flag)
    {
        string tmp = s.substr(0, n);
        s.erase(s.begin(), s.begin()+ n);
        s += tmp;
    }
    cout << s << endl;
    return 0;
}
