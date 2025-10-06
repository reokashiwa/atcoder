#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N, R;
  cin >> N >> R;
  if ((N < 2) || (N > 2 * 10e5))
    exit(1);
  if ((R < 0) || (R > N))
    exit(1);
  vector<bool> L(N);
  rep (i, N) {
    int l;
    cin >> l;
    if ((l != 0) && (l != 1))
      exit(1);
    if (l == 0)
      L[i] = false;
    else
      L[i] = true;
  }
  int left_min = 0, right_max = N - 1;
  rep (i, N) {
    if (L[i]) continue;
    else {
      left_min = i;
      break;
    }
  }
  for (int i = N - 1; i >= 0; i--) {
    if (L[i]) continue;
    else {
      right_max = i;
      break;
    }
  }
  int count = 0;
  // R-1からleft_min まで全部解錠するのに必要な開閉操作数。
  for (int i = left_min; i < R; i++)
    if (L[i]) count++;
  // left_min からR-1まで全部施錠するのに必要な開閉操作数。
  count = count + (R - 1 - left_min + 1);
  // Rからright_max まで全部解錠するのに必要な開閉操作数。
  for (int i = R; i < right_max + 1; i++)
    if (L[i]) count++;
  // Rからright_maxまで全部施錠するのに必要な開閉操作数。
  count = count + (right_max - R + 1);
  cout << count << endl;
}

/*
 1 0 0 1 0 0
- - - R - - -
- - R - - - - 2へ移動
 1 1 0 1 0 0  鍵2をロック
- - - R - - - 3へ移動
 1 1 1 1 0 0  鍵3をロック
 1 1 1 0 0 0  鍵4を解錠
- - - - R - - 4へ移動
 1 1 1 1 0 0  鍵4をロック
- - - - - R - 5へ移動
 1 1 1 1 1 0  鍵5をロック
 1 1 1 1 1 1  鍵6をロック

 0 0
- R -
 1 0 鍵1をロック
 0 1 鍵2をロック

 0 1 0 0 1 0 1 1
- - R - - - - - -
- R - - - - - - - 1へ移動
 0 0 0 0 1 0 1 1  2を解錠 *
 1 0 0 0 1 0 1 1  1を施錠 *
- - R - - - - - - 2へ移動
 1 1 0 0 1 0 1 1  2を施錠 *
- - - R - - - - - 3へ移動
 1 1 1 0 1 0 1 1  3を施錠 *
- - - - R - - - - 4へ移動
 1 1 1 1 1 0 1 1  4を施錠 *
 1 1 1 1 0 0 1 1  5を解錠 *
- - - - - R - - - 5へ移動
 1 1 1 1 1 0 1 1  5を施錠 *
 1 1 1 1 1 1 1 1  6を施錠 *


  // R-1からleft_min まで全部解錠するのに必要な開閉操作数。
  for (int i = left_min; i < R; i++)
    if (L(i)) count++;
  // left_min からR-1まで全部施錠するのに必要な開閉操作数。
  count = count + (R - 1 - left_min + 1);
  // Rからright_min まで全部解錠するのに必要な開閉操作数。
  for (int i = R; i < right_min + 1; i++)
    if (L(i)) count++;
  // Rからright_minまで全部施錠するのに必要な開閉操作数。
  count = count + (right_min - R + 1);

case 1
N = 6
R = 3
 1 0 0 1 0 0
- - - R - - -
left_min = 1
right_min = 5
R-1(2)からleft_min(1)まで全部解錠するのに必要な開閉操作数。
0
left_min からR-1まで全部施錠するのに必要な開閉操作数。
2(R-1) - 1(left_min) + 1 = 2
R(3)からright_min(5)まで全部解錠するのに必要な開閉操作数。
1
Rからright_minまで全部施錠するのに必要な開閉操作数。
right_min(5) - R(3) + 1 = 3
*/
