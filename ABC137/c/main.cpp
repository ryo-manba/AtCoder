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
    int n;
    cin >> n;
    map<string, int> mp;
    rep(i,n)
    {
        string s;
        cin >> s;
        sort(s.begin(), s.end());
        //sが同じ場合要素がインクリメントされる
        mp[s]++;

    }
    ll ans = 0;
    for (auto& p : mp)
    {
        //sに要素を代入
        int s = p.second;
        //２項係数
        ans += (ll)s * (s - 1) / 2; 
    }
    cout << ans << endl;
    return 0;
}