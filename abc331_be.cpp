#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N, S, M, L;
  cin >> N >> S >> M >> L;
  if ((N < 1) || (N > 100))
    exit(1);

  if ((S < 1) || (S > 10e4))
    exit(1);
  if ((M < 1) || (M > 10e4))
    exit(1);
  if ((L < 1) || (L > 10e4))
    exit(1);

  int ans = 2147483647;
  rep (s, 101) {
    rep (m, 101) {
      rep (l, 101) {
	if (s * 6 + m * 8 + l * 12 >= N) {
	  ans = min(ans, s * S + m * M + l * L);
	}
      }
    }
  }
  cout << ans << endl;
  return 0;
}
