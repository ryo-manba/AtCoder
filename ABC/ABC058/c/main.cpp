#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;
struct fast_ios { fast_ios(){ cin.tie(nullptr), ios::sync_with_stdio(false), cout << fixed << setprecision(20); }; } fast_ios_;
const int INF = (int)1e9;
const ll INFL = (ll)1e15;
const int MOD = 1e9 + 7;
const double EPS = 1e-8;
int dx[]={0, 0, -1, 1};
int dy[]={1, -1, 0, 0};
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }


int main()
{
    int n;
    cin >> n;
    int a[55][55] = {{}};
    string ans = "";
    string s;
    rep(i,n)
    {
        cin >> s;
        rep(j,s.size()) 
        {
            a[i][s[j] - 'a']++;
        }
    }

    rep(i,26)
    {
        int mini = INF;
        rep(j,n)
        {
            if (j == 0) mini = a[j][i];
            chmin(mini, a[j][i]);
        }
        rep(k,mini)
        {
            ans += ('a' + i);
        }
    }
    cout << ans << endl;
    return 0;
}