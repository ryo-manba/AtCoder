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
    string s;
    cin >> s;
    int a = s[0] - '0', b = s[1] - '0', c = s[2] - '0', d = s[3] - '0';
    if (a - b - c - d == 7) printf("%d-%d-%d-%d=7\n", a, b, c, d);
    else if (a - b - c + d == 7) printf("%d-%d-%d+%d=7\n", a, b, c, d);
    else if (a - b + c - d == 7) printf("%d-%d+%d-%d=7\n", a, b, c, d);
    else if (a - b + c + d == 7) printf("%d-%d+%d+%d=7\n", a, b, c, d);
    else if (a + b - c - d == 7) printf("%d+%d-%d-%d=7\n", a, b, c, d);
    else if (a + b - c + d == 7) printf("%d+%d-%d+%d=7\n", a, b, c, d);
    else if (a + b + c - d == 7) printf("%d+%d+%d-%d=7\n", a, b, c, d);
    else if (a + b + c + d == 7) printf("%d+%d+%d+%d=7\n", a, b, c, d);
    return 0;
}
