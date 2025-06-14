#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N, K;
  cin >> N >> K;
  if ((N < 1) || (N > 100))
    exit(1);
  if ((K < 1) || (K > 100))
    exit(1);
  int k = 0, n = 0;
  rep (i, N) {
    int a;
    cin >> a;
    if ((a < 1) || (a > K))
      exit(1);
    if (K - k < a) {
      n++;
      k = a;
    } else
      k = k + a;
  }
  cout << n + 1 << endl;
  return 0;
}
