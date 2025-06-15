#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int H, W;
  cin >> H >> W;
  if ((H < 2) || (H > 5 * 10e5))
    exit(1);
  if ((W < 2) || (W > 5 * 10e5))
    exit(1);
  if ((H * W < 2) || (H * W > 5 * 10e5))
    exit(1);
  vector<vector<char>> A(H, vector<char>(W));

  rep(i, H) {
    rep (j, W) {
      char c;
      cin >> c;
      if ((c < 'a') || (c > 'z'))
	exit(1);
      A[i][j] = c;
    }
  }

  int Q;
  cin >> Q;
  if ((Q < 1) || (Q > 2 * 10e5))
    exit(1);
  vector<vector<int>> ab(Q, vector<int>(2));
  rep (i, Q) {
    int a, b;
    cin >> a >> b;
    if ((a < 1) || (a > H - 1))
      exit(1);
    else
      ab[i][0] = a;
    if ((b < 1) || (b > W - 1))
      exit(1);
    else
      ab[i][1] = b;
  }
}
