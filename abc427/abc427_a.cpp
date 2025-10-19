#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  string S;
  cin >> S;
  if ((S.size() < 3) || (S.size() > 9))
    exit(1);
  if (S.size() % 2 == 0)
    exit(1);
  int center = S.size() / 2;
  rep (i, S.size()) {
    if (i != center)
      cout << S[i];
  }
  cout << endl;
  return 0;
}
