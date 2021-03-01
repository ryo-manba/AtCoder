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
    string queen[8];
    rep(i,8) cin >> queen[i];
    vector<int> a(8);
    rep(i,8) a[i] = i;

    do{
        bool ok = true;
        //被らない順列の生成
        rep(i,8){
            rep(j,i){
                if (abs(i - j) == abs(a[i] - a[j])) ok = false;
            }
        }
        if (!ok) continue;

        //最初に設置したqueenをcheckする
        rep(i, 8){
            rep(j,8){
                if (queen[i][j] == 'Q' && a[i] != j) ok = false;
            }
        }
        if (!ok) continue;
        
        //a[i]にqueenを設置
        rep(i,8) queen[i][a[i]] = 'Q';
        rep(i,8) cout << queen[i] << endl;
        return 0;
    } while(next_permutation(a.begin(), a.end()));
     
    cout << "No Answer" << endl;
    return 0;
}