#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;
struct fast_ios { fast_ios(){ cin.tie(nullptr), ios::sync_with_stdio(false), cout << fixed << setprecision(20); }; } fast_ios_;
const int INF = (int)1e9;
const ll INFL = (ll)1e18;
const int MOD = 1e9 + 7;
const double EPS = 1e-10;
int dx[]={0, 0, -1, 1};
int dy[]={1, -1, 0, 0};
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

int main()
{
    string A, B, C;
    cin >> A >> B >> C;

    deque<char> deqA, deqB, deqC;
    for (auto a : A) deqA.push_back(a);
    for (auto b : B) deqB.push_back(b);
    for (auto c : C) deqC.push_back(c);
    
    char ans;
    char card = deqA.front();
    while (1)
    {
        if (card == 'a')
        {
            if (!deqA.empty())
            {
                card = deqA.front();
                deqA.pop_front();
            }
            else
            {
                ans = 'A';
                break;
            }
        }
        if (card == 'b')
        {
              if (!deqB.empty())
            {
                card = deqB.front();
                deqB.pop_front();
            }
            else
            {
                ans = 'B';
                break;
            }

        }
        if (card == 'c')
        {
              if (!deqC.empty())
            {
                card = deqC.front();
                deqC.pop_front();
            }
            else
            {
                ans = 'C';
                break;
            }

        } 
    }
    cout << ans << endl;
    return 0;
}