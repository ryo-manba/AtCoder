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
    int n, m, x;
    cin >> n >> m >> x;
    vector<int> a(m);
    int maxi = 0, mini = 0;
    rep(i,m)
    {
         cin >> a[i];
         if (a[i] > x && a[i] < n)
            maxi++;
        else if (a[i] < x)
            mini++;
    }
    chmin(mini, maxi);
    cout << mini << endl;
    return 0;
}