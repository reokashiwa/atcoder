#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N, D;
  cin >> N >> D;
  if ((N < 1) || (N > 100))
    exit(1);
  if ((D < 1) || (D > 10e9))
    exit(1);

  int prev_t = 0;
  rep (i, N) {
    int t;
    cin >> t;
    if ((t < 1) || (t > 10e9))
      exit(1);
    if (i > 0) {
      if (t - prev_t <= D) {
	cout << t << endl;
	return 0;
      }
    }
    prev_t = t;
  }
  cout << -1 << endl;
  return 0;
}
