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

int main()
{
    int a, b, c, x, y;
    cin >> a >> b >> c >> x >> y;
    int mini = min(x, y);
    int maxi = max(x, y);
    int ans1 = (a * x) + (b * y);
    int ans2, ans3;
    if (x - y <= 0)
    {
        ans2 = (y * 2 * c);
        ans3 = (x * 2 * c) + (y - x) * b;
    }
    else
    {    
        ans2 = (x * 2 * c);
        ans3 = (y * 2 * c) + (x - y) * a;
    }
    cout << min({ans1, ans2, ans3}) << endl;
    return 0;
}
