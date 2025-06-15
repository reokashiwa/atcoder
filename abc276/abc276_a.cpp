#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  string S;
  cin >> S;
  if ((S.size() < 1) || (S.size() > 100))
    exit(1);
  for (int i = S.size() - 1; i >= 0; i--) {
    if (S.at(i) == 'a') {
      cout << i + 1;
      exit(0);
    }
  }
  cout << -1;
}
