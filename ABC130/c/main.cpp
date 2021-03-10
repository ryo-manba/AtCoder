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
    double w, h, x, y;
    cin >> w >> h >> x >> y;
    double ans = w * h / 2;
    int num;

    // 四角の中心にx, yがある場合のみ複数分割方法がある
    // それ以外は必ず中心を通るので1通りしかない
    if (w == x * 2 && h == y * 2)
        num = 1;
    else 
        num = 0;
    printf("%.10f %d\n", ans, num);
    return 0;
}