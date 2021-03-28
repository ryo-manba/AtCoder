#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
struct fast_ios { fast_ios(){ cin.tie(nullptr), ios::sync_with_stdio(false), cout << fixed << setprecision(20); }; } fast_ios_;
using ll = long long;
using P = pair<int, int>;
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
    int a, b, n;
    cin >> a >> b >> n;
    n *= 1000;
    int mini = INF;
    int maxi = 0;

    for (int i = 1; i <= n; i++)
    {
        if (a * i <= n && b * i >= n)
        {
            chmin(mini, i);
            chmax(maxi, i);
        }
    }
    if (mini == INF && maxi == 0)
        cout << "UNSATISFIABLE" << endl;
    else
        cout << mini << " " << maxi << endl;
    return 0;
}