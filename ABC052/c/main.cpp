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
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

vector<pair<ll, ll> > prime_factorize(ll n) 
{
    vector<pair<ll, ll> > res;
    for (ll i = 2; i * i <= n; i++) {
        if (n % i != 0) continue;
        ll ex = 0;
        while (n % i == 0)
        {
            ex++;
            n /= i;
        }
        res.push_back({i, ex});
    }
    if (n != 1) res.push_back({n , 1});
    return res;
}

int main()
{
    ll n;
    cin >> n;

    vector<ll> ex(n+1, 0);
    for (ll i = 2; i <= n; i++)
    {
        const auto &res = prime_factorize(i);
        for (auto p : res) ex[p.first] += p.second;
    }

    ll res = 1;
    for (int j = 2; j <= n; j++)
    {
        res *= ex[j] + 1;
        res %= MOD;
    }
    cout << res << endl;
    return 0;
}