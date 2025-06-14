#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  string s;
  cin >> s;
  if ((s.size() < 1) || (s.size() > 5))
    exit(1);
  rep (i, s.size() - 1) {
    if (s[i] > s[i + 1])
      continue;
    else {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
  return 0;
}
