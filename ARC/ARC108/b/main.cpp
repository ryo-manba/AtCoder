#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;
struct fast_ios { fast_ios(){ cin.tie(nullptr), ios::sync_with_stdio(false), cout << fixed << setprecision(20); }; } fast_ios_;
const int INF = (int)1e9;
const ll INFL = (ll)1e15;
const int MOD = 1e9 + 7;
const double EPS = 1e-8;
int dx[]={0, 0, -1, 1};
int dy[]={1, -1, 0, 0};
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

int main()
{
    int n;
    string s;
    cin >> n >> s;

    rep(i,n)
    {
        if (n - i > 2)
        {
            if (s[i] == 'f' && s[i + 1] == 'o' && s[i + 2] == 'x') 
            {
                s.erase(s.begin() + i);
                s.erase(s.begin() + i);
                s.erase(s.begin() + i);
                if (i < 3)
                {
                    i = -1;
                    n -= 3;
                }
                else
                {
                    i -= 3;
                    n -= 3;
                }
            }
        }
    }
    cout << n << endl;
    return 0;
}