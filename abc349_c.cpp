#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  string S, T;
  cin >> S >> T;
  int s = S.size();
  if ((s < 3) || (s > 10e5))
    exit(1);
  if (T.size() != 3)
    exit(1);

  int x = 3;
  if (T[2] == 'X')
    x = 2;

  int i = 0;
  rep (j, s) {
    if (S[j] - 'a' == T[i] - 'A') {
      i++;
      if (i == x) {
	cout << "Yes" << endl;
	return 0;
      }
      continue;
    }
  }
  cout << "No" << endl;
  return 0;
}
