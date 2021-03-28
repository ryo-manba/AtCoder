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
    int k;
    cin >> k;
    int ans = 0;
    rep(i,k){
        rep(j,k){
            rep(n,k){
                ans += gcd(i + 1, gcd(j + 1, n + 1));
            }
        }
    }
    cout << ans << endl;
    return 0;
}
