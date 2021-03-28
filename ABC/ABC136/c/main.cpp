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
    vector<int> h(n);
    rep(i,n) cin >> h[i];

    for(int i = 1; i < n; i++)
    {
        if (h[i] < h[i - 1] && h[i] == h[i - 1] - 1)
        {
            h[i]++;
        }
        else if (h[i] >= h[i - 1])
            continue;
        else if (h[i] != h[i - 1] - 1)
        {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}