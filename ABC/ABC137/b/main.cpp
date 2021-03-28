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
    int k, x;
    cin >> k >> x;
    int mini = x - (k - 1);
    int maxi = x + (k - 1);
    while (mini != maxi)
    {
        cout << mini << " ";
        mini++;
    }
    cout << maxi << endl;
    return 0;
}