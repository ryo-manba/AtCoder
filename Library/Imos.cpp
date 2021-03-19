/* いもす法
    区間に値を加算する (最後に、最終的な区間の値をまとめて知る)
    というクエリを高速に扱うことのできる手法。

    #区間の入口と出口のみに対し、加算と減算をそれぞれ先に行い、
    最後に累積和を求めていくことで大幅に計算量を減らすことができる。

*/

// 途中で値を超えていたかを調べる
int main()
{
    ll n, w;
    cin >> n >> w;
    vector<ll> d(200000); 
    rep(i,n) 
    {
        ll s, t, p;
        cin >> s >> t >> p;
        d[s] += p;
        d[t] -= p;
    }
    rep(i,n) d[i + 1] += d[i];
    rep(i,n + 1)
    {
        if (d[i] > w)
        {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}