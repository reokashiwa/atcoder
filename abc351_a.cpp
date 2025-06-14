#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int sum = 0;
  rep (i, 9) {
    int a;
    cin >> a;
    if ((a < 0) || (a > 99))
      exit(1);
    sum = sum + a;
  }
  rep (i, 8) {
    int b;
    cin >> b;
    if ((b < 0) || (b > 99))
      exit(1);
    sum = sum - b;
  }
  if (sum < 0)
    exit(1);
  cout << sum + 1 << endl;
  return 0;
}
