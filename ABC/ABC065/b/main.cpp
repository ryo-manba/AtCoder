#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    int n;
    cin >> n;
    int a[n];
    rep(i,n) cin >> a[i];
    int ans = -1;
    int i = 1;
    for (int j = 1; j <= n; j++)
    {
        i = a[i - 1];
        if (i == 2)
        {
            ans  = j;
            break;
        }
    }
    cout << ans << endl;
    return 0;
}