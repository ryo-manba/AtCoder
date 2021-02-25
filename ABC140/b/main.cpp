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
    int n;
    cin >> n;
    vector <int> a(n);
    vector <int> b(n);
    vector <int> c(n - 1);
    rep(i,n)
    {   
        cin >> a[i];
        a[i]--;
    }
    rep(i,n) cin >> b[i];
    rep(i, n - 1) cin >> c[i];

    int ans = 0;
    rep(i,n)
    {
        ans += b[a[i]];
        if (i > 0 && a[i] == a[i - 1] + 1)
        {
            ans += c[a[i - 1]];
        }
    }
    cout << ans << endl;
    return 0;
}

