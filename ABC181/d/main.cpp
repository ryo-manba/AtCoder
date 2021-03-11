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

bool solve(string s)
{
    // 1桁の場合
    if (s.size() == 1) 
        return s == "8";

    // 2桁の場合
    // swapで2パターン試す
    if (s.size() == 2)
    {
        if (stoi(s) % 8 == 0) return true;
        swap(s[0], s[1]);
        if (stoi(s) % 8 == 0) return true;
        return false;
    }
    
    // 3桁以上の場合
    vector<int> cnt(10);
    for (auto c : s) cnt[c - '0']++;

    // 下3桁が8の倍数のものを列挙 (1000 = 8 * 125)
    for (int i = 0; i < 1000; i += 8)
    {
        int x = i;
        vector<int> nc(10);
        rep(j,3)
        {
            nc[x % 10]++;
            x /= 10;
        }
        bool ok = true;
        rep(j,10) if (nc[j] > cnt[j]) ok = false;
        if (ok) return true; 
    }
    return false;
}

int main()
{
    string s;
    cin >> s;
    if (solve(s)) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}