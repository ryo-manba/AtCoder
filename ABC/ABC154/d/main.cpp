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
    int n, k;
    cin >> n >> k;
    vector<double> p(n);
    vector<double> s(n + 1);
    double ans = 0;
    rep(i,n) 
    {
        cin >> p[i];
        s[i + 1] += s[i] + p[i] * (p[i] + 1) / 2 / p[i];
    }
    int j = 0;
    for (int i = k; i <= n; i++)
    {
        chmax(ans, s[i] - s[j]);
        j++;
    }

    printf("%.10f\n", ans);    
    return 0;
}