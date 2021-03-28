#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;
const int INF = (int)1e9;
const ll INFL = (ll)1e15;
const int MOD = 1e9 + 7;
int dx[]={0, 0, -1, 1};
int dy[]={1, -1, 0, 0};
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

const double EPS = 1e-8;

double move(double a, double b, double c, double d)
{
    double num = sqrt(pow((a - b),2) + pow((c - d), 2));
    return num;
}

int main()
{
    vector<double> tx(2), ty(2);
    double t, v, n;
    rep(i,2) cin >> tx[i] >> ty[i];
    cin >> t >> v;
    cin >> n;
    vector<double> x(n), y(n);
    rep(i,n) cin >> x[i] >> y[i];
    double speed = t * v;

    vector<double> dist(n);
    rep(i,n)
    {
        double first = move(x[i], tx[0], y[i], ty[0]);
        double second = move(tx[1], x[i], ty[1], y[i]);
        double goal = first + second;
        if (goal - EPS <= speed)
        {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}