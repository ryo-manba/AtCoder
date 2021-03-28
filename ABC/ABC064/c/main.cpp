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
    vector<int> a(n);
    set<string> st;
    rep(i,n) cin >> a[i];
    int awesome = 0;

    rep(i,n)
    {
        if (a[i] <= 399) st.insert("grey");
        if (a[i] >= 400 && a[i] <= 799) st.insert("brown");
        if (a[i] >= 800 && a[i] <= 1199) st.insert("green");
        if (a[i] >= 1200 && a[i] <= 1599) st.insert("lblue");
        if (a[i] >= 1600 && a[i] <= 1999) st.insert("blue");
        if (a[i] >= 2000 && a[i] <= 2399) st.insert("yellow");
        if (a[i] >= 2400 && a[i] <= 2799) st.insert("orange");
        if (a[i] >= 2800 && a[i] <= 3199) st.insert("red");
        if (a[i] >= 3200) awesome++;
    }
    if (st.size() == 0)
        cout << 1 << " " << awesome << endl;
    else
        cout << st.size() << " " << st.size() + awesome << endl;
    return 0;
}