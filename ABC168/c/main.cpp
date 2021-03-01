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

#define PI 3.14159265358979323846264338327950L

int main()
{
    int a, b, h, m;
    cin >> a >> b >> h >> m;
    
    //余弦定理で求める
    long double rad = PI * 2 * (
        (long double)h / 12.0 + ((long double)m / 60.0) / 12.0 - 
        (long double)m / 60.0);
    
    long double rsq = (long double)(a * a + b * b) - (long double)(2 * a * b) *
    cosl(rad);

    printf("%20.20Lf\n", sqrtl(rsq));
    return 0;
}
