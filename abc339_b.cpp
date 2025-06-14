#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int H, W, N;
  cin >> H >> W >> N;
  if ((H < 1) || (H > 100))
    exit(1);
  if ((W < 1) || (W > 100))
    exit(1);
  vector<vector<char>> HW(H, vector<char> (W, '.'));
  if ((N < 1) || (N > 1000))
    exit(1);
  int x = 0, y = 0;
  int rot = 90;

  rep (i, N) {
    if (HW[y][x] == '.') {
      HW[y][x] = '#';
      rot = rot - 90;
    } else {
      HW[y][x] = '.';
      rot = rot + 90;
    }
    if (rot < 0)
      rot = rot + 360;
    rot = rot % 360;
    if (rot == 90) {
      y = y - 1;
      if (y == -1)
	y = H - 1;
    } else if (rot == 180) {
      x = x - 1;
      if (x == -1)
	x = W - 1;
    } else if (rot == 270) {
      y = y + 1;
      if (y == H)
	y = 0;
    } else if (rot == 0) {
      x = x + 1;
      if (x == W)
	x = 0;
    }
  }
  rep (i, H) {
    rep (j, W)
      cout << HW[i][j];
    cout << endl;
  }
  return 0;
}
