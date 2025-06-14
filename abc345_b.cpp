#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  long long X;
  cin >> X;
  if ((X < -1 * 10e18) || (X > 10e18))
    exit(1);
  bool sign = true;
  if (X < 0)
    sign = false;
  if (! sign)
    X = X * (-1);
  bool mod = true;
  if (X % 10 != 0)
    mod = false;
  X = X / 10;

  if (sign) {
    if (mod)
      cout << X << endl;
    else
      cout << X + 1 << endl;
  } else {
    cout << X * (-1) << endl;
  }
  /*
  if (mod) {
    if (sign)
      cout << X << endl;
    else
      cout << X * (-1) << endl;
  } else {
    if (sign)
      cout << X + 1 << endl;
    else
      cout << X * (-1) << endl;
  }
  */
  return 0;
}
