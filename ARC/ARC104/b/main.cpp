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
    string s;
    cin >> n >> s;
    int ans = 0;
    rep(i,n)
    {
        int c1 = 0;
        int c2 = 0;
        // Aの個数 = Tの個数
        // Cの個数 = Gの個数
        for (int j = i; j < n; j++)
        {
            if (s[j] == 'A')
                c1++;
            if (s[j] == 'T')
                c1--;
            if (s[j] == 'C')
                c2++;
            if (s[j] == 'G')
                c2--;
            if (c1 == 0 && c2 == 0)
                ans++;
        }
    }   
    cout << ans << endl;
    return 0;
}