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
    int n;
    cin >> n;
    vector<int> c(n - 1), s(n - 1), f(n - 1);
    rep(i, n - 1) cin >> c[i] >> s[i] >> f[i];
    //　jにs + t秒後に到着したとき、駅j + 1に向かう列車に乗れるのが開通式開始何秒後かを考える
    rep(i,n)
    {
        int t = 0;
        for (int j = i; j < n - 1; j++)
        {
            if (t < s[j]) 
                t = s[j];
            
            // t % f = 0なら開通式開始の秒後
            // それ以外はt + f - (t % f)秒後
            else if (t % f[j] == 0);
            else  
                t = t + f[j] - t % f[j];
            t += c[j];
        }
        cout << t << endl;
    }
    return 0;
}
