#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N, M;
  cin >> N >> M;
  if ((N < 1) || (N > 100))
    exit(1);
  if ((M < 1) || (M > 100))
    exit(1);
  vector<string> C(N);
  rep (i, N) {
    string c;
    cin >> c;
    if ((c.size() < 1) || (c.size() > 20))
      exit(1);
    C[i] = c;
  }
  vector<string> D(M);
  rep (i, M) {
    string d;
    cin >> d;
    if ((d.size() < 1) || (d.size() > 20))
      exit(1);
    D[i] = d;
  }
  map<string, int> P;
  int p0 = 0;
  rep (i, M + 1) {
    int p;
    cin >> p;
    if (i == 0) {
      p0 = p;
      continue;
    }
    P[D[i - 1]] = p;
  }

  int sum = 0;
  rep (i, N) {
    if (P.count(C[i])) {
      sum = sum + P[C[i]];
    } else {
      sum = sum + p0;
    }
  }
  cout << sum << endl;
}
