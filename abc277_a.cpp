#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N, X;
  cin >> N >> X;
  if ((N < 1) || (N > 100))
    exit(1);
  if ((X < 1) || (X > N))
    exit(1);

  vector<int> P(N);
  rep(i, N) {
    int p;
    cin >> p;
    if ((p < 1) || (p > N))
      exit(1);
    rep(j, i) {
      if (P.at(j) == p)
	exit(1);
    }
    P.at(i) = p;
  }
  rep(i, N) {
    if (P.at(i) == X) {
      cout << i + 1 << endl;
      exit(0);
    }
  }
}
