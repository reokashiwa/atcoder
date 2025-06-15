#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N, S, K;
  cin >> N >> S >> K;
  if ((N < 1) || (N > 100))
    exit(1);
  if ((S < 1) || (S > 10000))
    exit(1);
  if ((K < 1) || (K > 10000))
    exit(1);
  int sum = 0;
  rep (i, N) {
    int p, q;
    cin >> p >> q;
    if ((p < 1) || (p > 10000))
      exit(1);
    if ((q < 1) || (q > 10000))
      exit(1);
    sum = sum + p * q;
  }
  if (sum < S)
    cout << sum + K << endl;
  else
    cout << sum << endl;

  return 0;
  
}
