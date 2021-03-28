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


// DFS(深さ優先探索)
// 再帰関数を用いる
void dfs(string s, int n)
{
    if (n == s.size())
    {
        cout << s << endl;
        return ;
    }
    dfs(s + "a", n);
    dfs(s + "b", n);
    dfs(s + "c", n);
}

int main()
{
    int n;
    cin >> n;
    dfs("", n);   
    return 0;
}