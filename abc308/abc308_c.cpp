#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N;
  cin >> N;
  if ((N < 2) || (N > 2 * 10e5))
    exit(1);
  vector<double> R(N);
  rep (i, N) {
    int a, b;
    cin >> a >> b;
    if ((a < 0) || (a > 10e9))
      exit(1);
    if ((b < 0) || (b > 10e9))
      exit(1);
    if (a + b < 1)
      exit(1);
    R[i] = (double) a / (double) (a + b);
  }
  map<double, vector<int>> RM;
  rep (i, N) {
    vector<int> v = RM[R[i]];
    v.push_back(i);
    RM[R[i]] = v;
  }

  sort(R.begin(), R.end());

  for (int i = N - 1; i >= 0; i--) {
    rep (j, RM[R[i]].size()) {
      cout << RM[R[i]][j] + 1 << " ";
    }
    i = i - (RM[R[i]].size() - 1);
  }
  return 0;
}
