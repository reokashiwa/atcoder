#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N, K;
  cin >> N >> K;
  if ((N < 1) || (N > 2 * 10e5))
    exit(1);
  if ((K < 1) || (K > 2 * 10e5))
    exit(1);
  if (N < K)
    exit(1);
  vector<int> A(K);
  rep (i, K) {
    int a;
    cin >> a;
    if ((a < 1) || (a > N))
      exit(1);
    if (i > 0) {
      if (A[i - 1] >= a)
	exit(1);
    }
    A[i] = a;
  }
}
