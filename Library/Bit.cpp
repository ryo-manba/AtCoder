
/* bit全探索
    条件が2択の時に使える
    2のべき乗は 1 << n (2^n)
    &演算子でそこにflagが立っているのかを確かめる
*/


int main()
{
    int n, m, k;
    cin >> n >> m;
    vector<int> a(m), b(m);
    rep(i,m) cin >> a[i] >> b[i];
    cin >> k;
    vector<int> c(k), d(k);
    rep(i,k) cin >> c[i] >> d[i];

    int ans = 0;
    int k2 = 1<<k; // 2^k
    rep(s,k2)
    {
        vector<int> dish(n + 1);
        
        // flagが立っていたら d の条件
        // 立っていなかったら c の条件
        rep(i,k) 
        {
            if (s>>i & 1) dish[d[i]]++;
            else dish[c[i]]++;
        }

        // 条件を満たした個数をnowに入れる
        int now = 0;
        rep(i,m)
        {
            if (dish[a[i]] == 0) continue;
            if (dish[b[i]] == 0) continue;
            now++;
        }
        chmax(ans, now);
    }
    cout << ans << endl;
    return 0;
}

// 別パターン
int main(){
  int n, w;
  cin >> n >> w;
  int a[n];
  rep(i,n) cin >> a[i];
  for (int s = 0; s < (1 << n); s++){
    int sum = 0;
    for (int i = 0; i < n; i++){
      if (s & (1 << i)){  
        sum += a[i];
      }
    }
   if (sum == w){
      cout << "OK" << endl;
      return 0;
    }
  }
  cout << "NG" << endl;
  return 0;
}