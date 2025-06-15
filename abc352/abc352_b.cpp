#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  string S, T;
  cin >> S;
  cin >> T;
  if ((S.size() < 1) || (S.size() > 2 * 10e5))
    exit(1);
  if ((T.size() < 1) || (T.size() > 2 * 10e5))
    exit(1);
  int j = 0;
  rep (i, S.size()) {
    if (S[i] == T[j])
      cout << j + 1 << " ";
    else
      i--;
    j++;
  }
  cout << endl;
  return 0;
}
