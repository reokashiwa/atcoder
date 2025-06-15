#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  string s;
  cin >> s;
  if ((s.size() < 1) || (s.size() > 10))
    exit(1);
  string t;
  rep (i, s.size()) {
    if ((s[i] != '0') && (s[i] != '1'))
      exit(1);
    if (s[i] == '0')
      t.push_back('1');
    else
      t.push_back('0');
  }
  cout << t << endl;
}
