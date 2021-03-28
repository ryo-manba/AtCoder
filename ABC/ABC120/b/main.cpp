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
    int a, b, k;
    cin >> a >> b >> k;
    vector<int> ans(150, 0);
    for(int i = 1; i < 101; i++)
    {
        if (a % i == 0 && b % i == 0)
            ans[i] = i;

    }
    sort(ans.rbegin(),ans.rend());
    cout << ans[k - 1] << endl;
    return 0;
}
