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
    map<int, int> mp;
    int dif = 2025 - n;
    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= 9; j++) {
            if (dif == i * j)
            {
                mp[i] = j;
            }
        }
    }

    for (auto p : mp)
        printf("%d x %d\n", p.first, p.second);
    return 0;
}
