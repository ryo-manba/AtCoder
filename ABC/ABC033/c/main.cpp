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

// +をとって乗算だけにする
vector<string> split(string s, string delim)
{
    vector<string> res;
    int curr = 0;

    // +までの距離
    int delim_len = delim.size();
    int found;
    while ((found = s.find(delim, curr)) != -1)
    {
        res.push_back((string(s, curr, found - curr)));
        curr = found + delim_len;
    } 
    // 乗算をresに入れていく
    res.push_back(string(s, curr, s.size() - curr));
    res.erase(remove(res.begin(), res.end(), ""), res.end());

    return res;
} 

int main()
{
    string s;
    cin >> s;
    auto x = split(s, "+");
    int ans = 0;
    for (auto a : x)
    {
        auto it = find(a.begin(), a.end(), '0');

        // 終端までに0がないか確かめる
        if (it == a.end()) ans++;
    }
    cout << ans << endl;
    return 0;
}