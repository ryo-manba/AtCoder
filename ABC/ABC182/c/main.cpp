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
    vector<int> cnt(3);
    while (n)
    {
        cnt[n % 10 % 3]++;
        n /= 10;
    }
    int cur = (cnt[1] + 2 * cnt[2]) % 3;
    int k = cnt[0] + cnt[1] + cnt[2];
    int res;
    if (!cur) res = 0;
    else if (cur == 1)
    {
        if (cnt[1])
        {
            if (k == 1) res = -1;
            else res = 1;
        }
        else 
        {
            if (k == 2) res = -1;
            else res = 2;
        }
    }
    else 
    {
        if (cnt[2]) 
        {
            if (k == 1) res = -1;
            else res = 1;
        }
        else
        {
            if (k == 2) res = -1;
            else res = 2;
        }
    }
    cout << res << endl;
    return 0;
}
