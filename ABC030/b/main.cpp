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
    int n, m;
    cin >> n >> m;
    double a, b, ans, ans2;
    n %= 12;    //  12だったら0になる
    a = 360.0 / 12 * n;      //  長針は1時間で360/12(30度)、1分ごとに360/12/60(0.5度)動く
    a += 360.0 / 12.0 / 60.0 * m;
    b = 360.0 / 60.0 * m;

    // 長針と短針の差を取る
    ans = abs(a - b);
    ans2 = 360.0 - ans;
    chmin(ans, ans2);
    cout << ans << endl;
    return 0;
}