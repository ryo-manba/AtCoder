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
    int n, k, q;
    cin >> n >> k >> q;
    int a[q];
    rep(i,q) cin >> a[i];
    vector<int> ans(n, k - q);

    rep(i, q)
    {
        ans[a[i] - 1] += 1;
    }

    rep(i,n)
    {
        if (ans[i] >= 1)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}