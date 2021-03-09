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
    ll n;
    cin >> n;

    // 数列の先頭に空文字列 ""を付け加えることで、一の位の処理を特別扱いしなくて良い
    string res = "";

    // n が0になるまで n % 26を桁に加える
    while(n)
    {
        n--;
        res += (char)('a' + (n % 26));
        n /= 26;
    }
    reverse(res.begin(), res.end());
    cout << res << endl;
    return 0;
}