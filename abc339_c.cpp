#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N;
  cin >> N;
  if ((N < 1) || (N > 2 * 10e5))
    exit(1);
  long long min = 0;
  long long  sum = 0;
  rep (i, N) {
    long long a;
    cin >> a;
    if ((a < -1 * 10e9) || (a > 10e9))
      exit(1);
    sum = sum + a;
    if (min > sum)
      min = sum;
  }
  if (min < 0)
    cout << min * (-1) + sum << endl;
  else
    cout << sum << endl;
  return 0;
}
