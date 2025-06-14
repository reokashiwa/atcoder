#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

void exec_case() {
  unsigned long long N, K;
  cin >> N >> K;
  if ((N < 1) || (N > 10e18))
    exit(1);
  if ((K < 1) || (K > 10e18))
    exit(1);
  if (N < K)
    exit(1);
  rep (i, K) {
    if (N - i % 3 != 0)
      continue;
    else
      
  }
}

int main() {
  int T;
  cin >> T;
  if ((T < 1) || (T > 10e5))
    exit(1);

  rep (i, T) {
    exec_case();
  }
  return 0;
}
