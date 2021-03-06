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

// 前処理を行う
void pre_process(vector<int> const &w, vector<int> &s) {
    int n = (int)w.size();
    s.assign(n + 1, 0);
    for (int i = 0; i < n; i++) {
        s[i + 1] = s[i] + w[i];
    }
}

// [i,j) の区間和を求める
int query(int i, int j, vector<int> const &S) {
    return S[j] - S[i];
}

int main() {
    int n;
    cin >> n;
    vector<int> w(n);
    rep(i,n) cin >> w[i];
    vector<int> s;
    int ans = INF;
    pre_process(w, s);
    for(int i = 1; i < n; i++)
    {
        ans = min(ans, abs(s[i] - (s[n] - s[i])));
    }
    cout << ans << endl;
    return 0;
}