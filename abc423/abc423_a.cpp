#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int X, C;
  cin >> X >> C;
  if ((X < 1) || (X > 10e7))
    exit(1);
  if ((C < 1) || (C > 999))
    exit(1);
  cout << X / (1000 + C) * 1000 << endl;
}
