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


// 累積和

// 前処理を行う
void pre_process(vector<int> const &a, vector<int> &S) {
    int n = (int)a.size();
    S.assign(n + 1, 0);
    for (int i = 0; i < n; i++) {
        S[i + 1] = S[i] + a[i];
    }
}

// [i,j) の区間和を求める
int query(int i, int j, vector<int> const &S) {
    return S[j] - S[i];
}

int main() {
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> S;
    pre_process(a, S);
    cout << query(1, 3, S) << endl;  // 2+3 = 5
    cout << query(2, 7, S) << endl;  // 3+4+5+6+7 = 25
    return 0;
}

int main()
{
    int n; 
    cin >> n; // 配列サイズ
    vector<int> a(n);
    rep(i,n) cin >> a[i];

    // 累積和
    vector<int> s(n + 1, 0); // s[0] = 0 になる
    for (int i = 0; i < n; ++i) s[i + 1] = s[i] + a[i];
    
    for (int k = 1; k <= n; k++) {
    int ans = 0;
    for (int i = 0; i+k <= n; i++) {
      // 始点 i, 長さ k の区間の和は s[i+k] - s[i] で取り出せる
      chmax(ans, (s[i+k] - s[i]));// chmax(A,B) は A = max(A,B) と同じ
    }
    cout << ans << '\n';
  }
}