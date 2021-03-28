
/*  UnionFind
    グループ分けを木構造で管理するデータ構造

    1. 2つのグループを1つにまとめる
    2. 2つの要素が同じグループに属しているかを判定する
*/

struct UnionFind {
    vector<int> par; // par[i]:iの親の番号　(例) par[3] = 2 : 3の親が2

    UnionFind(int N) : par(N) { //最初は全てが根であるとして初期化
        for(int i = 0; i < N; i++) par[i] = i;
    }

    int root(int x) { // データxが属する木の根を再帰で得る：root(x) = {xの木の根}
        if (par[x] == x) return x;
        return par[x] = root(par[x]);
    }

    void unite(int x, int y) { // xとyの木を併合
        int rx = root(x); //xの根をrx
        int ry = root(y); //yの根をry
        if (rx == ry) return; //xとyの根が同じ(=同じ木にある)時はそのまま
        par[rx] = ry; //xとyの根が同じでない(=同じ木にない)時：xの根rxをyの根ryにつける
    }

    bool same(int x, int y) { // 2つのデータx, yが属する木が同じならtrueを返す
        int rx = root(x);
        int ry = root(y);
        return rx == ry;
    }
};

// AtCoder版
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