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
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        bool ok = true;
        for (int base : {8, 10})
        {
            int x = i;
            while (x > 0)
            {
                if (x % base == 7) ok = false;
                x /= base;
            }
        }
        if (ok) ans++;
    }
    cout << ans << endl;
    return 0;
}