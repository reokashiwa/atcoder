#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  unsigned long long B;
  cin >> B;
  if ((B < 1) || (B > 10e18))
    exit(1);

  for (int i = 1; i < 16; i++) {
    unsigned long long power = i;
    rep (j, i - 1) {
      power = power * i;
    }
    if (B == power) {
      cout << i << endl;
      return 0;
    } else if (B < power)
      break;
  }
  cout << -1 << endl;
  return 0;
    
}
