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
    int q;
    cin >> s >> q;
    string t;
    rep(qi,q)
    {
        int ty;
        cin >> ty;
        if (ty == 1) 
            swap(s,t);
        else
        {
            int f;
            char c;
            cin >> f >> c;
            if (f == 1)
                t += c;
            else
                s += c;
        }
    }
    reverse(t.begin(), t.end());
    t += s;
    cout << t << endl;
    return 0;
}