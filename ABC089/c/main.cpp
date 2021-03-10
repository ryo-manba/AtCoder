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
    ll n;
    cin >> n;
    string s;
    vector<ll> a(5, 0);
    rep(i,n) 
    {
        cin >> s;
        if (s[0] == 'M') a[0]++; 
        if (s[0] == 'A') a[1]++;
        if (s[0] == 'R') a[2]++;
        if (s[0] == 'C') a[3]++;
        if (s[0] == 'H') a[4]++;
    }

    ll ans = 0;
    for(int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 5; j++) {
            for (int k = j + 1; k < 5; k++) {
                ans += a[i] * a[j] * a[k];
            }
        }
    }
    cout << ans << endl;
    return 0;
}