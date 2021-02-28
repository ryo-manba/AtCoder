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

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> l(m), r(m);
    int maxl = 0;
    int minr = n;
    rep(i,m) 
    {
        cin >> l[i] >> r[i];
        maxl = max(maxl, l[i]);
        minr = min(minr, r[i]);
    }
    int ans = minr - maxl + 1;
    ans = max(ans, 0);
    cout << ans << endl;
    return 0;
}