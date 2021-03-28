#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;
const int INF = (int)1e9;
const ll INFL = (ll)1e15;
const int MOD = 1e9 + 7;
int dy[]={0, 0, 1, -1, 0};
int dx[]={1, -1, 0, 0, 0};
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> h(n), a(m), b(m);
    vector<int> ans(n, 0);
    rep(i,n) cin >> h[i];
    rep(i,m) 
    {
        cin >> a[i] >> b[i];
        if (h[a[i] - 1] < h[b[i] - 1])
            ans[a[i] - 1]--;

        else if (h[a[i] - 1] > h[b[i] - 1])
            ans[b[i] - 1]--;
        else if (h[a[i] - 1] == h[b[i] - 1])
        {
            ans[a[i] - 1]--;
            ans[b[i] - 1]--;
        }
    }
    int count = 0;
    rep(i,n)
    {
        if (ans[i] == 0)
            count++;
    }
    cout << count << endl;
    return 0;
}