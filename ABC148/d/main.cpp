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
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i,n) 
    {
        cin >> a[i];
    }
    int cnt = 0;
    int j = 1;
    rep(i,n)
    {   
        if (a[i] == j)
        {
            j++;
            cnt++;
        }
    }
    int ans = 0;
    if (cnt == 0)
        ans = -1;
    else
        ans = n - cnt;
    cout << ans << endl;
    return 0;
}