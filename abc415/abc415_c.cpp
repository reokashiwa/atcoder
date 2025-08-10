#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int case() {
  int N;
  cin >> N;
  if ((N < 1) || (N > 18))
    exit(1);
  string S;
  cin >> S;
  if (S.size() != (int)(pow(2, N) - 1))
    exit(1);
}

int main() {
  int T;
  cin >> T;
  if ((T < 1) || (T > 40000))
    exit(1);
  rep (i, T) {
    case();
  }
}
