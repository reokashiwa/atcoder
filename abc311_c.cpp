#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N;
  cin >> N;
  if ((N < 2) || (N > 2 * 10e5))
    exit(1);
  vector<int> A(N);
  rep (i, N) {
    int a;
    cin >> a;
    if ((a < 1) || (a > N))
      exit(1);
    rep (j, i) {
      if (a == A[j])
	exit(1);
    }
    A[i] = a;
  }
}
