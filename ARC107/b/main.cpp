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
    /* 
        (条件)    
        a, b, c, d <= n
        a + b - c - d = k
       
       (a + b) - (c + d) = k
       x = a + b とすると
       a + b = x 
       c + d = x - k

       f(n,x) * f(n, x - k)
       x = 2, .., 2n に対する上の値を足せば答えが求まる
    */

   ll n, k;
   cin >> n >> k;
   vector<ll> f(n + n - 1);
   rep(i,n) 
   {
       f[i] = f[n + n - 2 - i] = i + 1;  // f(n,k) = min(k - 1, 2n + 1 - k)
   }
   ll ans = 0;
   rep(i,n + n -1)
   {
       int j = i - k;
       if (0 <= j && j < n + n - 1) ans += f[i] * f[j];
    }
    cout << ans << endl;
    return 0;
}