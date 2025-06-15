#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N;
  cin >> N;
  if ((N < 3) || (N > 100))
    exit(1);

  string S;
  cin >> S;
  if (S.size() != N)
    exit(1);

  bool a = false, b = false, c = false;
  rep (i, S.size()) {
    if (S[i] == 'A') {
      a = true;
    } else if (S[i] == 'B') {
      b = true;
    } else if (S[i] == 'C') {
      c = true;
    }
    
    if (a && b && c) {
      cout << i + 1 << endl;
      return 0;
    }
  }
}
