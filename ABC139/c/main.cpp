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
    int max = 0;
    rep(i,n - 1){
        int count = 0;
        for(int j = i + 1; j < n; j++)
        {
            if (h[i] >= h[j])
            {
                count++;
                i++;
                if (max < count)
                    max = count;
            }
            else
            {
                j = n;
            }
        }
    }

    cout << max << endl;
    return 0;
}