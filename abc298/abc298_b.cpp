#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N;
  cin >> N;
  if ((N < 1) || (N > 100))
    exit(1);
  vector<vector<bool>> A(N, vector<bool>(N));
  vector<vector<bool>> B(N, vector<bool>(N));
  rep (i, N) {
    rep (j, N) {
      int a;
      cin >> a;
      if (a == 1)
	A[i][j] = true;
      else if (a == 0)
	A[i][j] = false;
      else
	exit(1);
    }
  }
  rep (i, N) {
    rep (j, N) {
      int b;
      cin >> b;
      if (b == 1)
	B[i][j] = true;
      else if (b == 0)
	B[i][j] = false;
      else
	exit(1);
    }
  }
  rep (k, 4) {
    bool flag = true;
    rep (i, N) {
      rep (j, N) {
	if ((A[i][j] == true) && (B[i][j] == false)) {
	  flag = false;
	  break;
	}
      }
      if (! flag)
	break;
    }
    if (flag) {
      cout << "Yes" << endl;
      return 0;
    }
    vector<vector<bool>> tmpA(N, vector<bool>(N));
    rep (i, N) {
      rep (j, N) {
	tmpA[i][j] = A[N - 1 - j][i];
      }
    }
    rep (i, N) {
      rep (j, N) {
	A[i][j] = tmpA[i][j];
      }
    }
  }
  cout << "No" << endl;
  return 0;
}
