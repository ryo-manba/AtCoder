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
    vector<int> p(n), q(n);
    rep(i,n) cin >> p[i];
    rep(i,n) cin >> q[i];
    vector<int> a(n);
    rep(i,n) a[i] = i + 1;

    map<vector<int>, int> mp;
    do {
        mp[a] = mp.size();
    } while (next_permutation(a.begin(), a.end()));

    int ans = abs(mp[p] - mp[q]);
    cout << ans << endl;
    return 0;
}
