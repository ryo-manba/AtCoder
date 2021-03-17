/*  二分探索(Binary Search)
    ソート済みの配列から目的の値を調べる

    条件には単調性が必要
    ･ある値で条件 C を満たしたならば、それ以降の値では必ず C を満たす
    ･ある値で条件 C を満たさなければ、それ以降の値では必ず C を満たさない
    存在する可能性のある範囲を、段々と半分に分けて（二分して）絞っていくイメージ

    条件の中から最大値、最小値を求めることも可能
    初期値のngには、絶対にfalse
    初期値のokには、絶対にtrue

    計算量
    配列の長さがnだとすると、一度中間を調べるごとに配列が半分になるので、
    平均と最悪の計算量は 𝑂(𝑙𝑜𝑔𝑛)

*/

vector<int> a(100,0);
// index が条件を満たすかどうか
bool isOK(int index, int key) {
    if (a[index] >= key) return true;
    else return false;
}

int binary_search(int key) {
    int ng = -1; //「index = 0」が条件を満たすこともあるので、初期値は -1
    int ok = (int)a.size(); // 「index = a.size()-1」が条件を満たさないこともあるので、初期値は a.size()

    /* ok と ng のどちらが大きいかわからないことを考慮 */
    while (abs(ok - ng) > 1) {
        int mid = (ok + ng) / 2;
        if (isOK(mid, key)) ok = mid;
        else ng = mid;
    }
    return ok;
}

#include <iostream>
#include <vector>
using namespace std;

// index が条件を満たすかどうか
bool isOK(int index, int key) {
    if (a[index] >= key) return true;
    else return false;
}

int binary_search(int key) {
    int left = -1; //「index = 0」が条件を満たすこともあるので、初期値は -1
    int right = (int)a.size(); // 「index = a.size()-1」が条件を満たさないこともあるので、初期値は a.size()

    /* どんな二分探索でもここの書き方を変えずにできる！ */
    while (right - left > 1) {
        int mid = left + (right - left) / 2;    // オーバーフロー防止

        if (isOK(mid, key)) right = mid;
        else left = mid;
    }

     /* left は条件を満たさない最大の値、right は条件を満たす最小の値になっている */
    return right;
} 