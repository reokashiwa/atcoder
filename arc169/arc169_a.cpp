#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N;
  cin >> N;
  if ((N < 2) || (N > 250000))
    exit(1);
  vector<int> A(N);
  rep (i, N) {
    int a;
    cin >> a;
    if ((a < - 10e9) || (a > 10e9))
      exit(1);
    A[i] = a;
  }
  vector<int> P(N - 1);
  rep (i, N - 1) {
    int p;
    cin >> p;
    if ((p < 1) || (p > i - 1))
      exit(1);
    P[i] = p;
  }

}
