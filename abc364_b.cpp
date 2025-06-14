#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int H, W;
  cin >> H >> W;
  if ((H < 1) || (H > 50))
    exit(1);
  if ((W < 1) || (W > 50))
    exit(1);
  int S_i, S_j;
  cin >> S_i >> S_j;
  if ((S_i < 1) || (S_i > H))
    exit(1);
  if ((S_j < 1) || (S_j > W))
    exit(1);
  S_i --;
  S_j --;
  vector<vector<int>> C(H, vector<int> (W));
  rep (i, H) {
    rep (j, W) {
      char c;
      cin >> c;
      if ((c != '.') && (c != '#'))
	exit(1);
      if ((i == S_i) && (j == S_j) && (c != '.'))
	exit(1);
      C[i][j] = c;
    }
  }
  string X;
  cin >> X;
  size_t x = X.size();
  if ((x < 1) || (x > 50))
    exit(1);
  rep (i, (int) x) {
    if ((X[i] != 'L') && (X[i] != 'R') && (X[i] != 'U') && (X[i] != 'D'))
      exit(1);
  }
  rep (i, (int) x) {
    if (X[i] == 'L') {
      if ((S_j > 0) && (C[S_i][S_j - 1] == '.'))
	S_j = S_j - 1;
    } else if (X[i] == 'R') {
      if ((S_j < W - 1) && (C[S_i][S_j + 1] == '.'))
	S_j = S_j + 1;
    } else if (X[i] == 'U') {
      if ((S_i > 0) && (C[S_i - 1][S_j] == '.'))
	S_i = S_i - 1;
    } else if (X[i] == 'D') {
      if ((S_i < H - 1) && (C[S_i + 1][S_j] == '.'))
	S_i = S_i + 1;
    }
  }
  cout << S_i + 1 << " " << S_j + 1 << endl;
}
