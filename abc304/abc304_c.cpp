#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int recursive (vector<vector<int>> L, vector<int> P, int N, int src) {
  for (int i = src + 1; i < N; i++) {
    if (L[src][i] == 1) {
      if (P[i] == 0) {
	P[i] = 1;
	if (recursive(L, P, N, i) == 0)
	  continue;
      } else
	continue;
    }
  }
  return 0;
}

int main() {
  int N, D;
  cin >> N >> D;
  if ((N < 1) || (N > 2000))
    exit(1);
  if ((D < 1) || (D > 2000))
    exit(1);
  vector<vector<int>> XY (N, vector<int> (2));
  rep (i, N) {
    int x, y;
    cin >> x >> y;
    if ((x < -1000) || (x > 1000))
      exit(1);
    if ((y < -1000) || (y > 1000))
      exit(1);
    rep (j, i) {
      if ((XY[j][0] == x) && (XY[j][1] == y))
	exit(1);
    }
    XY[i][0] = x;
    XY[i][1] = y;
  }
  vector<vector<int>> L (N, vector<int> (N));
  rep (i, N) {
    for (int j = i + 1; j < N; j++) {
      int dx = XY[i][0] - XY[j][0];
      int dy = XY[i][1] - XY[j][1];
      if (dx * dx + dy * dy > D * D) {
	L[i][j] = 0;
	L[j][i] = 0;
      }	else {
	L[i][j] = 1;
	L[j][i] = 1;
      }
    }
  }
  /*
  rep (i, N) {
    rep (j, N) {
      cout << L[i][j] << " ";
    }
    cout << endl;
  }
  */
  vector<int> P(N, 0);
  P[0] = 1;
  if (recursive(L, P, N, 0) == 0) {
    rep (i, N) {
      if (P[i] == 1)
	cout << "Yes" << endl;
      else
	cout << "No" << endl;
    }
  }
  return 0;
}
