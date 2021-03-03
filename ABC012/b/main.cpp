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
    int hour, mini, sec;
    hour = n / 3600;
    mini = n % 3600 / 60;
    sec = n % 60;
    string h, m, s;

    if (hour < 10)
    {
        h = to_string(hour);
        h = "0" + h;
    }
    if (hour > 9)
        h = to_string(hour);
    if (mini < 10)
    {
        m = to_string(mini);
        m = "0" + m;
    }
    if (mini > 9)
        m = to_string(mini);
    if (sec < 10)
    {
        s = to_string(sec);
        s = "0" + s;
    }
    if (sec > 9)
        s = to_string(sec);
    cout << h << ":" << m << ":" << s << endl;
    return 0;
}
