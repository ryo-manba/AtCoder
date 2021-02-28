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
    ll n;
    cin >> n;
    set<long> ans;
    for (long x = 1; x * x <= n; x++)
    {
        if (n % x == 0)
        {
            ans.insert(x);
            ans.insert(n / x);
        }
    }
    for(auto x:ans) cout << x << endl;
    return 0;
}
