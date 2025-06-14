#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  long long N;
  cin >> N;
  if ((N < 2) || (N > 10e17))
    exit(1);
  /*
  vector<long long> X;
  cout << N << endl;
  X.push_back(N);
  long long T = 0;
  while (true) {
    long long x, x1, x2;
    x = X[X.size() - 1];
    X.pop_back();
    x1 = x / 2;
    if (x % 2 == 0)
      x2 = x / 2;
    else
      x2 = x / 2 + 1;
    if (x1 > 1)
      X.push_back(x1);
    if (x2 > 1)
      X.push_back(x2);
    T = T + x;
    if (X.size() == 0)
      break;

    rep (i, X.size()) {
      cout << X[i] << " ";
    }
    cout << endl;
  }
  cout << T << endl;
  */
  long long T = 0;
  long long t = 1;
  rep (i, 64) {
    if ((N > pow(2, i)) && (N <= pow(2, i + 1))) {
      T = T + (i + 2) * (N - t);
      break;
    } else {
      T = T + (i + 2) * pow(2, i);
      t = t + pow(2, i);
      // cout << i << ", " << T << ", " << t << endl;
    }
  }
  cout << T << endl;
  return 0;
}
