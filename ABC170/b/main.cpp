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
    int x, y;
    cin >> x >> y;
    for(int i = 0; i <= x; i++)
    {
        int j = x - i;
        if (2 * i + 4 * j == y)
        {
            cout << "Yes" << endl;
            return 0;
        }

    }
    cout << "No" << endl;
    return 0;
}
