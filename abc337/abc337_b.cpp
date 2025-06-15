#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  string S;
  cin >> S;
  if ((S.size() < 1) || (S.size() > 100))
    exit(1);
  char abc = 'A';
  rep (i, S.size()) {
    if (S[i] == abc)
      continue;
    else if (S[i] - abc == 1) {
      abc++;
      continue;
    } else if (S[i] - abc == 2) {
      abc = abc + 2;
      continue;
    } else {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
  return 0;
}
