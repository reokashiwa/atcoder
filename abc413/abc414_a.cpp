#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N, L, R;
  cin >> N >> L >> R;
  if ((N < 1) || (N > 100))
    exit(1);
  if ((L < 0) || (L > 23))
    exit(1);
  if ((R < 0) || (R > 23))
    exit(1);
  if (L >= R)
    exit(1);
  int sum = 0;
  rep (i, N) {
    int x, y;
    cin >> x >> y;
    if ((x < 0) || (x > 23))
      exit(1);
    if ((y < 0) || (y > 23))
      exit(1);
    if (x >= y)
      exit(1);
    if ((x <= L) && (y >=R)) sum++;
  }
  cout << sum << endl;
}
