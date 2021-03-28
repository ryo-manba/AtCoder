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
    int x, n;
    cin >> x >> n;
    vector<int>d(102);
    rep(i,n)
    {
        int p;
        cin >> p;
        d[p] = 1;
    }
    P ans(99999, -1);
    for (int i = 0; i <= 101; i++)
    {
        if (d[i] == 1) continue;
        int dif = abs(x - i);
        ans = min(ans, P(dif, i));
    }
    cout << ans.second << endl;
    return 0;
}
