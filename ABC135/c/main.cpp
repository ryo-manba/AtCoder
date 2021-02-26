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
     long ans = 0;
    vector<int> a(n + 1),b(n);
    rep(i,n + 1) cin >> a[i];
    rep(i,n) cin >> b[i];
    rep(i,n){
        int left = min(a[i], b[i]);
        ans += left;
        a[i] -= left;
        b[i] -= left;

        int right = min(a[i + 1], b[i]);
        ans += right;
        a[i + 1] -= right;
        b[i] -= right;
    }
    cout << ans << endl;
    return 0;
}