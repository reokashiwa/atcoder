#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int T;
  cin >> T;
  if ((T < 1) || (T > 100))
    exit(1);

  rep (i, T) {
    int N;
    cin >> N;
    if ((N < 1) || (N > 100))
      exit(1);
    int odd_num = 0;
    rep (j, N) {
      int a;
      cin >> a;
      if ((a < 1) || (a > 10e9))
	exit(1);
      if ((a % 2) == 1)
	odd_num ++;
    }
    cout << odd_num << endl;
  }
}
