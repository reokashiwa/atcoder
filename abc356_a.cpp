#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N, L, R;
  cin >> N >> L >> R;
  if ((N < 1) || (N > 100))
    exit(1);
  if ((L < 1) || (L > 100))
    exit(1);
  if ((R < 1) || (R > 100))
    exit(1);
  if (L > R)
    exit(1);
  if (R > N)
    exit(1);
  for (int i = 1; i < L; i++)
    cout << i << " ";

  for (int i = L; i <= R; i++)
    cout << R - (i - L) << " ";

  for (int i = R + 1; i <= N; i++)
    cout << i << " ";

  cout << endl;
  return 0;
}
