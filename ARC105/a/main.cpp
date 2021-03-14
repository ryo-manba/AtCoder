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
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    string ans = "No";
    if (a == b + c + d) ans = "Yes";
    if (a + b == c + d) ans = "Yes";
    if (a + b + c == d) ans = "Yes";
    if (b == a + c + d) ans = "Yes";
    if (b + c == a + d) ans = "Yes";
    if (b + d == a + c) ans = "Yes";
    if (b + c + d == a) ans = "Yes";
    if (c  == a + b + d) ans = "Yes";
    if (c + d == a + b) ans = "Yes";
    if (d == a + b + c) ans = "Yes";

    cout << ans << endl;    
    return 0;
}