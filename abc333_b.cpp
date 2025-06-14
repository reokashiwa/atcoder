#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  string S, T;
  cin >> S >> T;
  if (S.size() != 2)
    exit(1);
  if (T.size() != 2)
    exit(1);
  rep (i, 2) {
    if ((S[i] < 'A') || (S[i] > 'E'))
      exit(1);
    if ((T[i] < 'A') || (T[i] > 'E'))
      exit(1);
  }
  if (S[0] == S[1])
    exit(1);
  if (T[0] == T[1])
    exit(1);
  int s, t;
  if (S[0] - S[1] > 0)
    s = S[0] - S[1];
  else
    s = S[1] - S[0];
  if (T[0] - T[1] > 0)
    t = T[0] - T[1];
  else
    t = T[1] - T[0];
  if (s > 2)
    s = 5 - s;
  if (t > 2)
    t = 5 - t;
  if (s == t)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return 0;
}
