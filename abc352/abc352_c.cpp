#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N;
  cin >> N;
  if ((N < 2) || (N > 2 * 10e5))
    exit(1);
  vector<int> B(N);
  long long a_sum = 0;
  rep (i, N) {
    int a, b;
    cin >> a >> b;
    if ((a < 1) || (a > 10e9))
      exit(1);
    if ((b < 1) || (b > 10e9))
      exit(1);
    if (a > b)
      exit(1);
    B[i] = b - a;
    a_sum = a_sum + (long long) a;
  }
  sort(B.begin(), B.end());
  cout << a_sum + (long long) B[B.size() - 1] << endl;
  return 0;
}
