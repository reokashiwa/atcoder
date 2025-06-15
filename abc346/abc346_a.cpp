#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N;
  cin >> N;
  if ((N < 2) || (N > 100))
    exit(1);
  int ap;
  rep (i, N) {
    int a;
    cin >> a;
    if ((a < 1) || (a > 100))
      exit(1);
    if (i > 0)
      cout << a * ap << " ";
    ap = a;
  }
  return 0;
}
