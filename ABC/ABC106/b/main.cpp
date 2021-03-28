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
    if (n % 2 == 0)
        n -= 1;
    for (int i = 1; i <= n; i += 2)
    {   
        int count = 0;
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
                count++;
            if (count == 8)
                ans++;
        }
        
    }
    cout << ans << endl;
    return 0;
}
