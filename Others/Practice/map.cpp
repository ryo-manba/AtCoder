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

//mapのvalueの最大値を出力

int main()
{
    int n;
    cin >> n;
    map<int, int> score;
    vector<int> a(n);
    rep(i,n)
    {
        cin >> a[i];
        if (score.count(a[i]))
            score[a[i]] += 1;
        else
            score[a[i]] = 1;
        
    }

    int mx = 0;
    int ans = -1;
    for (int x : a)
    {
        if (mx < score.at(x))
        {
            mx = score.at(x);
            ans = x;
        }
    }

    cout << ans << " " << mx << endl;
    return 0;
}