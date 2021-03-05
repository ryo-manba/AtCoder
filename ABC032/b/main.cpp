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

int main()
{
    string s;
    int k;
    cin >> s >> k;
    set<string> st;
    if (s.size() < k)
    {
        cout << 0 << endl;
        return 0;
    }
    if (s.size() == k)
    {
        cout << 1 << endl;
        return 0;
    }

    rep(i, s.size() - k + 1)
        st.insert(s.substr(i,k));
    cout << st.size() << endl;
    return 0;
}
