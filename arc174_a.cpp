#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N;
  cin >> N;
  if ((N < 1) || (N > 3 * 10e5))
    exit(1);
  int C;
  cin >> C;
  if ((N < -1 * 10e6) || (N > 10e6))
    exit(1);
  vector<int> A(N);
  rep (i, N) {
    int a;
    cin >> a;
    if ((a < -1 * 10e6) || (a > 10e6))
      exit(1);
    A[i] = a;
  }
}
