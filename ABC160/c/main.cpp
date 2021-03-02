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
    int k, n;
    cin >> k >> n;
    vector<int> a(n);
    rep(i,n) cin >> a[i];
    //円環を数直に考えて2周する
    a.push_back(a[0] + k);
    int l = 0;
    
    //隣接数線の中で1番距離が遠いところを探す
    rep(i,n) {
        l = max(l, a[i + 1] - a[i]);
    }
    int ans = k - l;
    cout << ans << endl;
    return 0;
}