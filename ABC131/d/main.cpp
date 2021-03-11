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
    int n;
    cin >> n;
    vector<P> p; 
    rep(i,n) 
    {
        int a, b;
        cin >> a >> b;
        p.push_back({b, a});
    }

    sort(p.begin(), p.end());
    int sum = 0;
    string ans = "Yes";
    rep(i,n)
    {
        sum += p[i].second;
        if (sum > p[i].first)
        {
            ans = "No";
            break;
        }
    }
    cout << ans << endl;
    return 0;
}