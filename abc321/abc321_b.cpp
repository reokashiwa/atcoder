#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N, X;
  cin >> N >> X;
  if ((N < 3) || (N > 100))
    exit(1);
  if ((X < 0) || (X > 100 * (N - 2)))
    exit(1);
  vector<int> A(N - 1);
  rep (i, N - 1) {
    int a;
    cin >> a;
    if ((a < 0) || (a > 100))
      exit(1);
    A[i] = a;
  }

  rep (i, 101) {
    vector<int> B(N);
    rep (j, A.size())
      B[j] = A[j];
    B[B.size() - 1] = i;
    sort(B.begin(), B.end());
    int num = 0;
    for (int j = 1; j < N - 1; j++)
      num = num + B[j];
    if (num >= X) {
      cout << i << endl;
      return 0;
    }
  }
  cout << -1 << endl;
  return 0;
}
