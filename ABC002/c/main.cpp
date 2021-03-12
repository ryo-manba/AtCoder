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
    vector<double> x(3), y(3);
    rep(i,3) cin >> x[i] >> y[i];

    double ans = abs((x[0] - x[2]) * (y[1] - y[2]) -(x[1] - x[2]) * (y[0] - y[2])) / 2;
    printf("%.1f\n", ans);
    return 0;
}