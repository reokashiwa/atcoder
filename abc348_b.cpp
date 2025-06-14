#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N;
  cin >> N;
  if ((N < 2) || (N > 100))
    exit(1);
  vector<pair<int, int>> XY(N);
  rep (i, N) {
    int x, y;
    cin >> x >> y;
    if ((x < -1000) || (x > 1000))
      exit(1);
    if ((y < -1000) || (y > 1000))
      exit(1);
    rep (j, i) {
      if ((XY[j].first == x) && (XY[j].second == y))
	exit(1);
    }
    XY[i] = make_pair(x, y);
  }
  rep (i, N) {
    int max = 0;
    int max_j = 0;
    rep (j, N) {
      if (i == j)
	continue;
      int d = pow((XY[i].first - XY[j].first), 2) + pow((XY[i].second - XY[j].second), 2);
      if (d > max) {
	max_j = j;
	max = d;
      }
    }
    cout << max_j + 1 << endl;
  }
  return 0;
}
