#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N;
  cin >> N;
  if ((N < 1) || (N > 100))
    exit(1);

  vector<int> X;
  rep (i, 5 * N) {
    int x;
    cin >> x;
    if ((x < 0) || (x > 100))
      exit(1);
    X.push_back(x);
  }

  sort(X.begin(), X.end());
  int sum = 0;
  for (int i = N; i < 4 * N; i++) {
    sum = sum + X[i];
  }
  printf("%3.10f\n", sum / 3.0 / N);
}
