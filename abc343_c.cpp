#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {

  long long N;
  cin >> N;
  if ((N < 0) || (N > 10e18))
    exit(1);

  for (int i = 110011; i > 0; i--) {
    long long I = pow(i, 3);
    int p;
    for (p = 0; p < 20; p++) {
      if (pow(10, p) > I)
	break;
    }

    vector<int> A(p);
    for (int P = p - 1; P >= 0; P--) {
      A[P] = I / pow(10, P);
      I = I - A[P] * pow(10, P);
    }

    bool flag = true;
    rep (i, p / 2 + 1) {
      if (A[p - 1 - i] != A[i]) {
	flag = false;
	break;
      }
    }
    if (flag && (pow(i, 3) <= N)) {
      rep (i, p)
	cout << A[p - i - 1];
      cout << endl;
      return 0;
    }
  }
  return 0;
}
