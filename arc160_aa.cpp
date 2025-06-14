#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N;
  if ((N < 1) || (N > 7000))
    exit(1);
  vector<int> A(N);
  rep (i, N) {
    A[i] = i;
  }
}
