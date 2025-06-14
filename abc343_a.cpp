#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int A, B;
  cin >> A >> B;
  if ((A < 0) || (A > 9))
    exit(1);
  if ((B < 0) || (B > 9))
    exit(1);
  if (A + B > 9)
    exit(1);

  rep (i, 10) {
    if ((i != A) && (i != B) && (i != A + B)) {
      cout << i << endl;
      return 0;
    }
  }
  
  return 0;
}
