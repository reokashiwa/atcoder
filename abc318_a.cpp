#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N, M, P;
  cin >> N >> M >> P;
  if ((N < 1) || (N > 2 * 10e5))
    exit(1);
  if ((M < 1) || (M > 2 * 10e5))
    exit(1);
  if ((P < 1) || (P > 2 * 10e5))
    exit(1);
  if (M > P)
    exit(1);
  if (N - M < 0)
    cout << 0;
  else 
    cout << (N - M) / P + 1;
}
