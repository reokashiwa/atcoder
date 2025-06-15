#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  string S;
  cin >> S;
  rep (i, S.size()) {
    if ((S[i] < 'a') && (S[i] > 'z'))
      exit(1);
  }
  if (S.size() % 2 != 0)
    exit(1);
  if (S.size() %2 > 100)
    exit(1);
  rep (i, S.size() / 2) {
    int j = i + 1;
    char c = S[2 * j - 1 - 1];
    S[2 * j - 1 - 1] = S[2 * j - 1];
    S[2 * j - 1] = c;
  }
  cout << S << endl;
}
