#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N;
  cin >> N;
  if ((N < 1) || (N > 1000))
    exit(1);
  vector<int> W(N);
  vector<int> X(N);
  rep (i, N) {
    int w, x;
    cin >> w >> x;
    if ((w < 1) || (w > 10e6))
      exit(1);
    if ((x < 0) || (x > 24))
      exit(1);
    W[i] = w;
    X[i] = x;
  }

  vector <int> T(24, 0);
  rep (i, 24) {
    rep (j, N) {
      int it = (i + X[j]) % 24;
      if ((it >= 9) && (it <= 17))
	T[i] += W[j];
    }
  }

  int max = 0;
  rep (i, 24) {
    if (max < T[i])
      max = T[i];
  }
  cout << max << endl;
}
