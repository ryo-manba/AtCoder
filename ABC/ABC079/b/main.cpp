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

vector<ll> memo(87, 0);

ll lucas(ll n)
{
    if (memo[n] != 0) return memo[n];
    return memo[n] = lucas(n - 1) + lucas(n - 2);
}

int main()
{   
    ll n;
    cin >> n;
    memo[0] = 2;
    memo[1] = 1;
    cout << lucas(n) << endl;
    return 0;
}
