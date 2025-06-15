#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N, M, H, K;
  cin >> N >> M >> H >> K;
  if ((N < 1) || (N > 2 * 10e5))
    exit(1);
  if ((M < 1) || (M > 2 * 10e5))
    exit(1);
  if ((H < 1) || (H > 2 * 10e5))
    exit(1);
  if ((K < 1) || (K > 2 * 10e5))
    exit(1);
  string S;
  cin >> S;
  if (S.size() != N)
    exit(1);
  rep (i, N) {
    if ((S[i] != 'R') && (S[i] != 'L') && (S[i] != 'U') && (S[i] != 'D'))
      exit(1);
  }
  vector<vector<int>> XY(M, vector<int> (2));
  vector<bool> flag(M, true);
  rep (i, M) {
    int x, y;
    cin >> x >> y;
    if ((x < -2 * 10e5) || (x > 2 * 10e5))
      exit(1);
    if ((y < -2 * 10e5) || (y > 2 * 10e5))
      exit(1);
    XY[i][0] = x;
    XY[i][1] = y;
  }
  sort(XY.begin(), XY.end());
  vector<int> P = {0, 0};
  rep (i, N) {
    if (S[i] == 'R') {
      H--;
      P[0]++;
    } else if (S[i] == 'L') {
      H--;
      P[0]--;
    } else if (S[i] == 'U') {
      H--;
      P[1]++;
    } else if (S[i] == 'D') {
      H--;
      P[1]--;
    }
    if (H < 0) {
      cout << "No" << endl;
      return 0;
    }
    rep (j, M) {
      if (XY[j][0] > P[0])
	break;
      if ((XY[j][0] == P[0]) && (XY[j][1] == P[1]) && (flag[j] == true) && (H < K)) {
	H = K;
	flag[j] = false;
      }
    }
  }
  cout << "Yes" << endl;
  return 0;
}
