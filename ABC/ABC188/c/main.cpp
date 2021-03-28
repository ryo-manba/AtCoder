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
    //べき乗はシフト演算で求められる
    int n2 = 1<<n;
    vector<int> a(n2);
    rep(i, n2) cin >> a[i];
    //index番号をmapで取っておく
    map<int,int> mp;
    rep(i,n2) mp[a[i]] = i + 1;
    while (a.size() > 2)
    {
        vector<int> na;
        for (int i = 0; i < a.size(); i += 2)
        {
            na.push_back(max(a[i],a[i + 1]));
        }
        swap(a,na);
    }
    int ans = min(a[0],a[1]);
    cout << mp[ans] << endl;
    return 0;
}