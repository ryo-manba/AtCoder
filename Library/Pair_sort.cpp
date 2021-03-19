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

//pairで受け取って2つ目の要素でsortして出力する
int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> p;
    rep(i,n){
        int a, b;
        cin >> a >> b;
        p.push_back(make_pair(a, b));
    }
    sort(p.begin(), p.end(), [](auto &left, auto &right) {
    return left.second < right.second;
    });

    for (pair<int, int> t : p)
    {
        int x, y;
        tie(x, y) = t;
        cout << x << " " << y << endl;
    }
    return 0;
}