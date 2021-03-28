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
    string s;
    cin >> s;
    rep(i, s.size())
    {
        s.pop_back();
        int half = s.size() / 2;
        string s1 = s.substr(half);
        string s2 = s.substr(0,half);
        if (s1 == s2)
        {
            cout << s.size() << endl;
            return 0;
        }
    }
    cout << 2 << endl;
    return 0;
}
