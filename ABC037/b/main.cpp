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
    int n, q;
    cin >> n >> q;
    vector<int> ans(n, 0);
    vector<int> l(q), r(q), t(q);
    rep(i,q) 
    {
        cin >> l[i] >> r[i] >> t[i];
        for(int j = l[i] - 1; j < r[i]; j++)
        {
           ans[j] = t[i];
        }
    }
    rep(i,n)
    {
        cout << ans[i] << endl;
    }
    return 0;
}