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
    string s;
    cin >> n >> q >> s;
    vector<int> sum(n + 1, 0);
    vector<int> l(q), r(q);
    rep(i,q) cin >> l[i] >> r[i];

    for (int i = 1; i < n; i++)
    {
        sum[i + 1] = sum[i];
        if (s[i - 1] == 'A' && s[i] == 'C')
            sum[i + 1]++;
    }

    rep(i,q) 
    {
        int ans = sum[r[i]] - sum[l[i]]; 
        cout << ans << endl;
    }
    return 0;
}