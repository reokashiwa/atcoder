#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N;
  cin >> N;
  if ((N < 1) || (N > 100))
    exit(1);

  string S;
  cin >> S;
  if (S.size() != N)
    exit(1);

  rep (i, N) {
    if ((S[i] != 'M') && (S[i] != 'F'))
      exit(1);
  }

  char c = S[0];
  for (int i = 1; i < N; i++) {
    if (S[i] == c) {
      cout << "No" << endl;
      return 0;
    }
    c = S[i];
  }
  cout << "Yes" << endl;
}
