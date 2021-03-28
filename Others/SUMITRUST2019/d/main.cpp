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


bool dp[30009][4][1009];
string s;
int n;

int main()
{
    cin >> n >> s;
    dp[0][0][0] = true;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= 3; j++) {
            for (int k = 0; k < 1000; k++) {
                if (dp[i][j][k] == false) continue;

                //[k]にsの値を代入していく
                dp[i + 1][j][k] = true;
                if (j <= 2)
                {
                    dp[i + 1][j + 1][k * 10 + (s[i] - '0')] = true;
                }
            }
        }
    }
    
    int count = 0;
    for (int i = 0; i < 1000; i++)
    {
        if (dp[n][3][i] == true) count++;
    }
    cout << count << endl;
    return 0;
}