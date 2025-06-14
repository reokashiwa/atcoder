#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N, M;
  cin >> N >> M;
  if ((N < 1) || (N > 100))
    exit(1);
  if ((M < 1) || (M > 100))
    exit(1);
  vector<int> A(M);
  rep (i, M) {
    int a;
    cin >> a;
    if ((a < 0) || (a > 10e7))
      exit(1);
    A[i] = a;
  }

  rep (i, N) {
    rep (j, M) {
      int x;
      cin >> x;
      if ((x < 0) || (x > 10e7))
	exit(1);
      A[j] = A[j] - x;
    }
  }
  rep (i, M) {
    if (A[i] > 0) {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
  return 0;
}
