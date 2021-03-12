#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;
const int INF = (int)1e9;
const ll INFL = (ll)1e15;
const int MOD = 1e9 + 7;
int dx[]={0, 0, -1, 1};
int dy[]={1, -1, 0, 0};
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

int main()
{
    char c[4][4];
    rep(i,4) rep(j,4) cin >> c[i][j];

    for(int i = 3; i >= 0; i--)
    {
        for (int j = 3; j >= 0; j--)
        {
            if (j != 0)
                cout << c[i][j] << " ";
            else
                cout << c[i][j] << endl;
        }
    }
    return 0;
}