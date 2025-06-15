#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N;
  cin >> N;
  if ((N < 2) || (N > 3 * 10e5))
    exit(1);
  vector<int> A(N);
  int64_t sum = 0;
  rep (i, N) {
    int a;
    cin >> a;
    if ((a < 1) || (a >= 10e8))
      exit(1);
    A[i] = a;
    sum = sum + (int64_t) (a * (N - 1));
  }
  int e = 0;
  rep (i, N) {
    for (int j = i + 1; j < N; j++) {
      if (A[i] + A[j] >= 100000000)
	e++;
    }
  }
  sum = sum - (int64_t) e * 100000000;
  cout << sum << endl;
  return 0;
}
