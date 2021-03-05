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
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(n), c(m), d(m);
    rep(i,n) cin >> a[i] >> b[i];
    rep(i,m) cin >> c[i] >> d[i];
    int ans = INF, count = 0;
    rep(i,n){
        rep(j,m){
            int man = (abs(a[i] - c[j]) + abs(b[i] - d[j]));
            if (ans > man)
            {
                ans = man;
                count = j; 
            }
        }
        cout << count + 1 << endl;
        ans = INF;
    }

    return 0;
}