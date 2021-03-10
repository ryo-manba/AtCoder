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
    int n, k;
    cin >> n >> k;
    double ans = 0;

    for (int i = 1; i <= n; i++)
    {
        double p = 1.0;
        int x = i;
        
        // 得点がk以上になるまでコインを振る
        while (x < k)
        {
            p *= 0.5;
            x *= 2;
        }
        ans += p / n;
    }

    printf("%.10f\n", ans);
    return 0;
}