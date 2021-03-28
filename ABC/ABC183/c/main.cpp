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
    int n, k;
    cin >> n >> k;
    int t[8][8];
    rep(i,n){
        rep(j,n){
            cin >>t[i][j];
        }
    }   
    vector<int> p;
    for (int i = 1; i < n; i++) p.push_back(i);
    int ans = 0;
    do {
        int tot = t[0][p[0]];
        rep(i,n - 2) tot += t[p[i]][p[i + 1]];
        tot += t[p.back()][0];
        if (tot == k) ans++;
    } while (next_permutation(p.begin(), p.end()));
    cout << ans << endl;
    return 0;
}
