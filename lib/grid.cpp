
/* 配列の縦横を確かめる
　　dxと dyを足してあげることで簡単に確かめられる
   
   ex) この場合は縦横に要素があるからtrue
    3 3
    .#.
    ###
    .#.
*/

int dx[]={0, 0, -1, 1};
int dy[]={1, -1, 0, 0};

int main()
{
    int h, w;
    cin >> h >> w;
    string s[h];
    rep(i,h) cin >> s[i];

    rep(i,h){
        rep(j,w){
            if (s[i][j] == '#')
            {
                int sum = 0;
                
                // 縦横にないか確かめる
                rep(k,4){
                    int x = j + dx[k];
                    int y = i + dy[k];
                    // 0未満と配列のサイズ以上の場合はcontinue
                    if (y < 0 || x < 0 || y >= h || x >= w) continue;
                    if (s[y][x] == '#') sum++;
                }
                //　周りになかったら出力
                if (!sum)
                {
                    cout << "No" << endl;
                    return 0;
                }
            }
        }
    }
    cout << "Yes" << endl;
    return 0;
}