#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  string S;
  cin >> S;
  if ((S.size() < 2) || (S.size() > 100))
    exit(1);
  int lastperiod = 0;
  rep (i, S.size()) {
    if (S[i] == '.')
      lastperiod = i;
  }
  for (int i = lastperiod + 1; i < S.size(); i++)
    cout << S[i];
  cout << endl;
  return 0;
}
