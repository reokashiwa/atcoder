#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N;
  cin >> N;
  if ((N < 1) || (N > 100))
    exit(1);
  rep (i, N) {
    if ((i + 1) % 3 == 0)
      cout << "x";
    else
      cout << "o";
  }
  cout << endl;
  return 0;
}
