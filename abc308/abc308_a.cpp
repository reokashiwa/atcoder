#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  rep (i, 8) {
    int s, sp;
    cin >> s;
    if ((s < 0) || (s > 1000))
      exit(1);
    if (i == 0) {
      sp = s;
      continue;
    }
    if ((s < 100) || (s > 675))
      break;
    if (s % 25 != 0)
      break;
    if (s < sp)
      break;
    if (i == 7) {
      cout << "Yes" << endl;
      return 0;
    }
    sp = s;
  }
  cout << "No" << endl;
  return 0;
}
