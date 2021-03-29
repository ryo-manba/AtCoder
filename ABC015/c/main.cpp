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

int n, k;
int t[5][5];

bool dfs(int index, int value)
{
    if (index == n) 
    {
        if (value == 0) return true;
        else    return false;
    }
    
    for (int i = 0; i < k; i++)
    {
        if (dfs(index + 1, value ^ t[index][i]))
            return true;
    }
    return false;
}

int main()
{
    cin >> n >> k;
    rep(i,n) rep(j,k) cin >> t[i][j];
    if (dfs(0,0))
        cout << "Found" << endl;
    else    
        cout << "Nothing" << endl;
    return 0;
}