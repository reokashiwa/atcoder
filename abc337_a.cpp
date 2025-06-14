#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N;
  cin >> N;
  if ((N < 1) || (N > 100))
    exit(1);
  int X = 0, Y = 0;
  rep (i, N) {
    int x, y;
    cin >> x >> y;
    if ((x < 0) || (x > 100))
      exit(1);
    if ((y < 0) || (y > 100))
      exit(1);
    X = X + x;
    Y = Y + y;
  }
  if (X > Y)
    cout << "Takahashi" << endl;
  else if (X < Y)
    cout << "Aoki" << endl;
  else
    cout << "Draw" << endl;

  return 0;
}
