#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N, M;
  cin >> N >> M;
  if ((N < 2) || (N > 50))
    exit(1);
  if ((M < 1) || (N > 50))
    exit(1);
  vector<vector<int>> ANUM(N, vector<int> (N, 0));

  rep (i, M) {
    vector<int> A(N);
    rep (j, N) {
      int a;
      cin >> a;
      if ((a < 1) || (N > 50))
	exit(1);
      a--;
      rep (k, j) {
	if (a == A[k])
	  exit(1);
      }
      A[j] = a;
    }
    rep (j, N) {
      if ((j > 0) && (j < N))
	ANUM[A[j - 1]][A[j]]++;
      if ((j >= 0) && (j < N - 1))
	ANUM[A[j]][A[j + 1]]++;
    }
  }
  int num = 0;
  rep (i, N) {
    for (int j = i + 1; j < N; j++) {
      if (ANUM[i][j] + ANUM[j][i] == 0)
	num++;
    }
  }
  cout << num << endl;
}
