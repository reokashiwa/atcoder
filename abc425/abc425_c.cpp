#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N, Q;
  cin >> N >> Q;
  if ((N < 1) || (N > 2 * 10e5))
    exit(1);
  if ((Q < 1) || (Q > 2 * 10e5))
    exit(1);
  vector<int64_t> B(2 * N + 1);
  B[0] = 0;
  rep (i, N) {
    int a;
    cin >> a;
    if ((a < 1) || (a > 10e9))
      exit(1);
    B[i + 1] = a;
    B[N + i + 1] = (int64_t) a;
  }
  rep (i, N * 2)
    B[i + 1] = B[i + 1] + B[i];

  int index = 0;
  rep (i, Q) {
    int q;
    cin >> q;
    if (q == 1) {
      int c;
      cin >> c;
      if ((c < 1) || (c > N))
	exit(1);
      index = index + c;
      index = index % N;
    } else if (q == 2) {
      int l, r;
      cin >> l >> r;
      if ((l < 1) || (l > N))
	exit(1);
      if ((r < 1) || (r > N))
	exit(1);
      if (l > r)
	exit(1);
      l = l - 1;
      cout << B[index + r] - B[index + l] << endl;
    } else
      exit(1);
  }
}
