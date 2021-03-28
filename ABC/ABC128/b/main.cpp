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
    int n, p;
    cin >> n;
    string s;
    vector<tuple<string, int, int>> a;
    for (int i = 1; i <= n; i++) 
    {
        cin >> s >> p;
        p = -p;
        a.push_back(tie(s,p,i));
    }
    sort(a.begin(), a.end());
    rep(i,n)
        cout << get<2>(a[i]) << endl;
    return 0;
}
