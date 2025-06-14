#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N;
  cin >> N;
  if ((N < 1) || (N > 100))
    exit(1);
  int h1;
  rep (i, N) {
    int h;
    cin >> h;
    if ((h < 1) || (h > 100))
      exit(1);
    if (i == 0) {
      h1 = h;
      continue;
    }
    if (h1 < h) {
      cout << i + 1 << endl;
      return 0;
    }
  }
  cout << -1 << endl;
  return 0;
}
