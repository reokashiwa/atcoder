#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  long long N;
  cin >> N;
  if ((N < 1) || (N > 10e18))
    exit(1);

  for (int i = 0; i < 64; i++) {
    long long p = pow((long long) 2, i);
    if ((p > N) || (N % p != 0)) {
      N = N / (p / 2);
      break;
    } else if (p == N) {
      cout << "Yes" << endl;
      return 0;
    } else
      continue;
  }
  for (int i = 1; i < 38; i++) {
    long long p = pow((long long) 3, i);
    if ((p > N) || (N % p != 0)) {
      cout << "No" << endl;
      return 0;
    } else if (p == N) {
      cout << "Yes" << endl;
      return 0;
    } else
      continue;
  }
}
