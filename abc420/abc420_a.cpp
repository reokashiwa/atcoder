#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int X, Y;
  cin >> X >> Y;
  if ((X < 1) || (X > 12))
    exit(1);
  if ((Y < 1) || (Y > 12))
    exit(1);
  if (X + Y > 12) {
    if ((X + Y) % 12 == 0)
      cout << 12;
    else 
      cout << (X + Y) % 12;
  } else
    cout << X + Y;
  cout << endl;
}
