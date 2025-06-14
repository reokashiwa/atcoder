#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N;
  cin >> N;
  if ((N < 1) || (N > 100))
    exit(1);

  int sum = 0;
  rep (i, N) {
    int d;
    cin >> d;
    if ((d < 1) || (d > 100))
      exit(1);

    if (i < 9) { // 1月~9月
      if (i + 1 > d) {// n月m日のmがnより大きければn月n日がある。
	continue;
      } else {
	sum++;
	// cout << i + 1 << "/" << d << endl;
	if ((i + 1) * 11 <= d) { // さらにn月m日のmが11n以上ならn月n日がある。
	  // cout << i + 1 << "/" << d << "(2)" << endl;
	  sum++;
	} else
	  continue;
      }
    } else { // 10月以降
      if ((i + 1) % 11 == 0) {
	if ((i + 1) <= d) {
	  // cout << i + 1 << "/" << d << "(3)" << endl;
	  sum = sum + 2;
	} else if ((i + 1) / 11 <= d) {
	  sum++;
	} else {
	  continue;
	}
      } else {
	continue;
      }
    }
  }
  cout << sum << endl;
  return 0;
}
