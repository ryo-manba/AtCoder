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
    int n;
    cin >> n;

    for (int i = 0; i <= n; i++)
    {
        int num = i * 1.08;
        if (num == n)
        {
            cout << i << endl;
            return 0;
        }
    }
    cout << ":(" << endl;
    return 0;
}
