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
    ll n;
    cin >> n;
    for (ll i = 3, a = 1; i < n; i *= 3, a++)
    {
        for (ll j = 5, b = 1; j < n; j *= 5, b++)
        {
            if (i + j == n)
            {
                cout << a << " " << b << endl;
                return 0;
            }
        }
    }
    cout << -1 << endl;
    return 0;
}