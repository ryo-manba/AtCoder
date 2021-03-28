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
    int n, m;
    cin >> n >> m;
    vector<int> k(m), p(m);
    int s[m][10];
    rep(i,m) {
        cin >> k[i];
        rep(j,k[i]){
            cin >> s[i][j];
            s[i][j]--;
        }
    }
    rep(i,m) cin >> p[i];
    int count = 0;
    rep(i,1 << n) {
        int sc = 0;
        rep(j,m) {
            int tc = 0;
            rep(l,k[j]){
                if (i&(1 << s[j][l])) tc++;
            }
            if ((tc & 1) == (p[j] & 1)) sc++;
        }
        if (sc == m) count++;
    }
    cout << count << endl;
    return 0;
}