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
    int a, b;
    cin >> a >> b;
    if (a > b)
        cout << a + a - 1;
    else if (a < b)
        cout << b + b - 1;
    else
        cout << a + b;
    cout << endl;
    return 0;
}