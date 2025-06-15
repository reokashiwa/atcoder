#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int H;
  cin >> H;
  if ((H < 1) || (H > 10e9))
    exit(1);
  int h = 0, d = 0;
  while (h <= H) {
    h = h + (int) pow(2, d);
    d++;
  }
  cout << d << endl;
  return 0;
}
