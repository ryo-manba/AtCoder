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
    vector<int> a(n);
    map<int, int> mp;
    rep(i,n)
    {
        cin >> a[i];
        mp[a[i]]++;
        mp[a[i] - 1]++;
        mp[a[i] + 1]++;
    }
    vector<pair<int, int>> p;

    for (auto m : mp)
    {
        p.push_back({m.second, m.first});        
    }
    sort(p.rbegin(), p.rend());
    cout << p[0].first << endl;
    return 0;
}
