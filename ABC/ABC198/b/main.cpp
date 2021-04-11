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
    string s, t, k;
    cin >> s;
    int cnt = 0;
    int sz = s.size() - 1;
    while (s[sz] == '0')
    {
        cnt++;
        sz--;
    }

    while (cnt--)
        t.push_back('0');
    int i = 0;
    while (s[i])
    {
        t.push_back(s[i]);
        i++;
    }
    k = t;
    reverse(t.begin(), t.end());
    if (k == t)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}
