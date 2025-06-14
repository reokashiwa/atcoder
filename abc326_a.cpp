#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int X, Y;
  cin >> X >> Y;
  if ((X < 1) || (X > 100))
    exit(1);
  if ((Y < 1) || (Y > 100))
    exit(1);
  if (X == Y)
    exit(1);
  if ((Y - X <= 2) && (Y - X >= -3)) {
    cout << "Yes" << endl;
  } else
    cout << "No" << endl;
  return 0;
}
