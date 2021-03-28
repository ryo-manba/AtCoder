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
    vector<int> x(n), y(n);
    rep(i,n) cin >> x[i] >> y[i];
    
    //ラムダ式 距離を求める用
    auto dist = [&](int i, int j){
        double dx = x[i] - x[j];
        double dy = y[i] - y[j];
        return sqrt(dx * dx + dy * dy);
    };
    vector<int> p(n);
    rep(i,n) p[i] = i;
    double len = 0;
    int cnt = 0;
    do {
        rep(i,n-1) {
            len += dist(p[i], p[i + 1]);
        }
        cnt++;
    } while (next_permutation(p.begin(), p.end()));
    double ans = len / cnt;
    printf("%.10f\n", ans);
    return 0;
}
 