#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;
struct fast_ios { fast_ios(){ cin.tie(nullptr), ios::sync_with_stdio(false), cout << fixed << setprecision(20); }; } fast_ios_;
const int INF = (int)1e9;
const ll INFL = (ll)1e18;
const int MOD = 1e9 + 7;
const double EPS = 1e-10;
int dx[]={0, 0, -1, 1};
int dy[]={1, -1, 0, 0};
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

// 多倍長テンプレ

/* -------------------------------------------------- */

#include <boost/multiprecision/cpp_dec_float.hpp>
#include <boost/multiprecision/cpp_int.hpp>
namespace mp = boost::multiprecision;
// 任意長整数型
using Bint = mp::cpp_int;
// 仮数部が10進数で1024桁の浮動小数点数型(TLEしたら小さくする)
using Real = mp::number<mp::cpp_dec_float<1024>>;
/* ---------------------- 使用例 ---------------------- */
/*
	Bint a = 123456789; // 整数
	Bint b("123456789123456789123456789123456789");
	Real c = -1.0; // 浮動小数点
*/
/* --------------------------------------------------- */


/**
 * - Uの総回数を求める
 * - LRの先頭から削除していって残りの動作を行う
 * - L = 2x
 * - R = 2x+1
 * - L->U = x/2
 * - R->U = x/2-1
 */

Bint u(Bint a)
{
	return a / 2;
}

Bint l(Bint a)
{
	return a * 2;
}

Bint r(Bint a)
{
	return a * 2 + 1;
}

int main()
{
	Bint n, x;
	cin >> n >> x;
	string s;
	cin >> s;
	deque<char> deq;

	rep(i,n)
	{
		if (s[i] == 'L') deq.push_back('L');
		if (s[i] == 'R') deq.push_back('R');
		if (s[i] == 'U')
		{
			if (!deq.empty() && deq.front() != 'U')
			{
				deq.pop_back();
			}
			else
			{
				deq.push_back('U');
			}
		}
	}

	while (!deq.empty())
	{
		if (deq.front() == 'L') x = l(x);
		if (deq.front() == 'R') x = r(x);
		if (deq.front() == 'U') x = u(x);
		deq.pop_front();
	}
	cout << x << endl;
	return 0;
}
