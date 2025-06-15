#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N;
  cin >> N;
  if ((N < 2) || (N > 100))
    exit(1);
  vector<string> A(N);
  rep (i, N) {
    string s;
    cin >> s;
    if (s.size() != N)
      exit(1);
    rep (j, N) {
      if ((s[j] != '0') && (s[j] != '1'))
	exit(1);
    }
    A[i] = s;

  }
  rep (i, N) {
    rep (j, N) {
      if ((i == 0) && (j > 0)) {
	cout << A[0][j - 1];
	if (j == N - 1)
	  cout << endl;
	continue;
      }
      if ((i == N - 1) && (j < N - 1)) {
	cout << A[N - 1][j + 1];
	continue;
      }
      if ((i < N - 1) && (j == 0)) {
	cout << A[i + 1][0];
	continue;
      }
      if ((i > 0) && (j == N - 1)) {
	cout << A[i - 1][N - 1] << endl;
	continue;
      }
      cout << A[i][j];
    }
  }
  return 0;
}
