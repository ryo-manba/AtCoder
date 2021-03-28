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
    int n, x;
    cin >> n >> x;
    vector<int> m(n);
    int mini = 1000;
    int sum = 0;
    rep(i,n) 
    {
        cin >> m[i];
        mini = min(mini, m[i]);
        x -= m[i];
    }
    if (x < mini)
    {
        cout << n << endl;
        return 0;
    }
    else 
    {
        while (x >= mini)
        {
            x -= mini;
            n++;
        }
    }
    cout << n << endl;
    return 0;
}
