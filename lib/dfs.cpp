
/* dfs(深さ優先探索)
    これ以上進めなくなるまで探索したら、戻って別のルートで探索し直す
    再帰関数を用いる

    Sの要素数がNの時
     1．何か処理をする
    Sの要素数がN未満の時
     1.Sに加えても条件Pを満たすような要素 a 全てに対して以下を行う
        1.Sにa を加えたものを S’ とする
        2.dfs(S’) を呼び出す
*/


// abcを重複順列で全列挙させる
void dfs(string s, int n)
{
    if (n == s.size())
    {
        cout << s << endl;
        return ;
    }
    dfs(s + "a", n);
    dfs(s + "b", n);
    dfs(s + "c", n);
}

int main()
{
    int n;
    cin >> n;
    dfs("", n);   
    return 0;
}