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

// vec値を出力
void print_vec(vector<int> vec)
{
    cout << "[ ";
    rep(i, vec.size()) {
        cout << vec.at(i) << " ";
    }
    cout << "]" << endl;
}

// 変数名を読み取りイコールを飛ばす
string read_name()
{
    string name, equal;
    cin >> name >> equal;
    return name;
}

// intなら1つ読む
// 数字ならその値を返す
// それ以外なら変数として解釈して変数の値を返す
int read_int(map<string, int> &var_int)
{
    string val;
    cin >> val;

    // 最初の文字が数字かどうかで数字か変数かを判定
    return isdigit(val.at(0))
        ? stoi(val) // 数値の場合
        : var_int.at(val); // 変数の場合
}

// int式全体を読み取り計算する
int calc_int(map<string, int> &var_int)
{
    string symbol = ""; // 演算子を受け取る
    int result = 0;

    // 式の終わりまで読み取る
    while (symbol != ";")
    {
        int val = read_int(var_int);
        if (symbol == "")
            result = val;

        if (symbol == "+")
            result += val;
        
        if (symbol == "-")
            result -= val;

        // symbolには、"+"、"-", ";" のどれかが入力される
        cin >> symbol;
    } 
    return result;
}


// vec値を読み取る
vector<int> read_vec_val(map<string, int> &var_int)
{
    vector<int> result;
    string symbol = ""; // vec値中の記号を受け取る

    // vec値の終わりまで読み取る
    while (symbol != "]")
    { 
        // 数値を一つ読み取ってvecに追加
        int val = read_int(var_int);
        result.push_back(val);

        // symbolには、"," か "]"が入力される
        cin >> symbol;
    }

    return result;
}

// vec式の項を一つ読み取る
// vec値ならその値を返し、そうでないなら変数として解釈し変数の値を返す
vector<int> read_vec(map<string, int> &var_int, map<string, vector<int>> &var_vec)
{
    string val;
    cin >> val;

    return val == "["
        ? read_vec_val(var_int) // vec値の場合
        : var_vec.at(val); // 変数の場合
}


// vec式全体を読み取って計算する
vector<int> calc_vec(map<string, int> &var_int, map<string, vector<int>> &var_vec)
{
    string symbol;
    vector<int> result;

    while (symbol != ";")
    {
        vector<int> vec = read_vec(var_int, var_vec);

        if (symbol == "") 
            result = vec;
        
        if (symbol == "+")
        {
            rep(i, result.size()) result.at(i) += vec.at(i);
        }

        if (symbol == "-")
        {
            rep(i,result.size()) result.at(i) -= vec.at(i);
        }

        // symbolには"+", "-", ";"のどれかが入力される
        cin >> symbol;
    }

    return result;
}

int main() 
{
    int n;
    cin >> n;

    map<string, int> var_int; // intの変数用
    map<string, vector<int>> var_vec; //vectorの変数用

    rep (i,n) {
        string s;
        cin >> s;

        if (s == "int") {
            string name = read_name();
            // 右辺の式を計算して変数に代入
            var_int[name] = calc_int(var_int);
        }

        if (s == "vec") {
            string name = read_name();
            // 右辺の式を計算して変数に代入
            var_vec[name] = calc_vec(var_int, var_vec);
        }

        if (s == "print_int") {
            //　式を計算して出力
            cout << calc_int(var_int) << endl;
        }

        if (s == "print_vec") {
            //　式を計算して出力
            print_vec(calc_vec(var_int, var_vec));
        }
    }
}