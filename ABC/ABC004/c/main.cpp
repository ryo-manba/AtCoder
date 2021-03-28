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

int main()
{
    int n;
    cin >> n;

    // 30回交換するとで初期の値に戻る
    // 30で割った余りで交換すれば良い
    n %= 30;

    string s = "123456";
    rep(i,n)
    {
        swap(s[i % 5], s[i % 5 + 1]);
    }
    cout << s << endl;
    return 0;
}