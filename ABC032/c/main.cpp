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
    int n, k;
    cin >> n >> k;
    vector<int> s(n);
    rep(i,n) 
    {
        cin >> s[i];
        if (s[i] == 0)
        {
            cout << n << endl;
            return 0;
        }
    }

    int res = 0;
    int right = 0;
    ll mul = 1;
    for (int left = 0; left < n; left++)
    {
        while (right < n && mul * s[right] <= k)
        {
            mul *= s[right];
            right++;
        }
        res = max(res, right - left);
        if (left == right) right++;
        else mul /= s[left];
    }
    cout << res << endl;
    return 0;
}