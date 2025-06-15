#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N, L;
  cin >> N >> L;
  if ((N < 1) || (N > 100))
    exit(1);
  if ((L < 1) || (L > 1000))
    exit(1);
  int sum = 0;
  rep (i, N) {
    int a;
    cin >> a;
    if ((a < 0) || (a > 1000))
      exit(1);
    if (a >= L)
      sum++;
  }
  cout << sum << endl;
  return 0;
}
