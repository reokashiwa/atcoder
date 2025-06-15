#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  string S;
  cin >> S;
  if ((S.size() < 1) || (S.size() > 100))
    exit(1);
  int v = 0, w = 0;
  rep(i, S.size()) {
    if (S.at(i) != 'v')
      v++;
    else if (S.at(i) != 'w')
      w++;
    else
      exit(1);
  }
  cout << v + w * 2 << endl;
}
