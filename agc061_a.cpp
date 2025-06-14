#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int T;
  cin >> T;
  if ((T < 1) || (T > 1000))
    exit(1);
  rep (i, T) {
    int N, K;
    cin >> N >> K;
    if ((N < 2) || (N > 10e18))
      exit(1);
    if ((K < 1) || (K > N))
      exit(1);
  }
}
