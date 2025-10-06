#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int testcase() {
  int a, b, c;
  cin >> a >> b >> c;
  int count = 0;
  while ((a > 0) && (c > 0)) {
    // cout << a << " " << b << " " << c << endl;
    a--;
    c--;
    if (b > 0)
      b--;
    else if (a > 0)
      a--;
    else if (c > 0)
      c--;
    else
      return count;
    count++;
  }
  return count;
}

int main() {
  int T;
  cin >> T;
  if ((T < 1) || (T > 2 * 10e5))
    exit(1);
  rep (i, T)
    cout << testcase() << endl;
}
