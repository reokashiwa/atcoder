#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int A, B;
  cin >> A >> B;
  if ((A < 1) || (A > 9))
    exit(1);
  if ((B < 1) || (B > 9))
    exit(1);
  int ans = 1;
  rep (i, B) {
    ans = ans * A;
  }
  cout << ans;
}
