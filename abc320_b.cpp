#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int checker(string S) {
  int s = S.size();
  if (s == 1)
    return 1;
  rep (i, s / 2) {
    if (S[i] != S[s - 1 - i])
      return 0;
  }
  return s;
}

int main() {
  string S;
  cin >> S;
  int s = S.size();
  if ((s < 2) || (s > 100))
    exit(1);
  rep (i, s) {
    if ((S[i] < 'A') || (S[i] > 'Z'))
      exit(1);
  }
  int max = 0;
  rep (i, s - 1) {
    for (int l = 1; l < s - i + 1; l++) {
      if (l <= max)
	continue;
      int substr_length = checker(S.substr(i, l));
      if (max < substr_length)
	max = substr_length;
    }
  }
  cout << max << endl;
}
