#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N;
  cin >> N;
  if ((N < 2) || (N > 2 * 10e5))
    exit(1);
  vector<int> A(N), B(N), X(N);
  rep (i, N) {
    int a, b, x;
    cin >> a >> b >> x;
    if ((a < 1) || (a > 10e9))
      exit(1);
    if ((b < 1) || (b > 10e9))
      exit(1);
    if ((x < 1) || (x > N))
      exit(1);
    A[i] = a;
    B[i] = b;
    X[i] = x;
  }
}
