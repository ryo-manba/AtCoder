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
    string s, t;
    cin >> s >> t;
    sort(s.begin(), s.end());
    sort(t.rbegin(), t.rend());
    int i = 0;
    int mini = min(s.size(), t.size());
    int j = mini;
    while(j)
    {
        if (s[i] < t[i])
        {
            cout << "Yes" << endl;
            return 0;
        }
        i++;
        j--;
    }
    if (s[mini - 1] == t[mini - 1] && t.size() > s.size())
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}