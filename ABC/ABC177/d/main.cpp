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

struct UnionFind {
    vector<int> d;
    UnionFind(int n = 0): d(n, -1) {}
    int find (int x) {
        if (d[x] < 0) return x;
        return d[x] =find(d[x]);
    }
    bool unite(int x, int y) {
        x = find(x); y = find(y);
        if (x == y) return false;
        if (d[x] > d[y]) swap(x, y);
        d[x] += d[y];
        d[y] = x;
        return true;
    }
    bool same(int x, int y) { return find(x) == find(y); }
    int size(int x) { return -d[find(x)];}
};

int main()
{
    int n, m;
    cin >> n >> m;
    // 初期化
    UnionFind uf(n);
    rep(i,m) 
    {
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        // a, bをくっつける
        uf.unite(a,b);
    }

    int ans = 0;
    // 連結成分サイズの最大値を求める
    rep(i,n) chmax(ans, uf.size(i));
    cout << ans << endl;
    return 0;
}