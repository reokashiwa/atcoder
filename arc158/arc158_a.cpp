#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int try_cases() {
  int x1, x2, x3;
  cin >> x1 >> x2 >> x3;
  if ((x1 < 1) || (x1 > 10e9))
    exit(1);
  if ((x2 < 1) || (x2 > 10e9))
    exit(1);
  if ((x3 < 1) || (x3 > 10e9))
    exit(1);
  vector<int> X(3);
  X = {x1, x2, x3};
  sort(X.begin(), X.end());
  int d12 = X[1] - X[0];
  int d23 = X[2] - X[1];
  if ((d12 % 2 != 0) || (d23 % 2 != 0))
    return -1;
  int num = 0;
  if (d12 < d23) {
    num = d12 / 2;
    d23 = d23 - d12;
    if (d23 % 3 == 0)
      return num + d23 / 3;
    else
      return -1;
  } else {
    num = d23 / 2;
    d12 = d12 - d23;
    if (d12 % 3 == 0)
      return num + d12 / 3;
    else
      return -1;
  }
}

int main() {
  int T;
  cin >> T;
  if ((T < 1) || (T > 2 * 10e5))
    exit(1);

  rep(i, T) {
    cout << try_cases() << endl;
  }
}
