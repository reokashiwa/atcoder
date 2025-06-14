#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N;
  cin >> N;
  if ((N < 1) || (N > 100))
    exit(1);
  string S, T;
  cin >> S >> T;
  if (S.size() != N)
    exit(1);
  if (T.size() != N)
    exit(1);

  rep (i, N) {
    if ((S[i] == T[i]) || ((S[i] == '1') && (T[i] == 'l')) || ((S[i] == 'l') && (T[i] == '1'))
	|| ((S[i] == '0') && (T[i] == 'o')) || ((S[i] == 'o') && (T[i] == '0')))
      continue;
    else {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
  return 0;
}
