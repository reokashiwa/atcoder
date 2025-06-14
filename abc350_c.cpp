#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N;
  cin >> N;
  if ((N < 2) || (N > 2 * 10e5))
    exit(1);
  vector<int> A(N);
  rep (i, N) {
    int a;
    cin >> a;
    a--;
    if ((a < 0) || (a > N))
      exit(1);
    rep (j, i) {
      if (A[j] == a)
	exit(1);
    }
    A[i] = a;
  }
  vector<pair<int, int>> P;
  rep (i, N) {
    while (A[i] != i) {
      pair<int, int>  p(i, A[i]);
      P.push_back(p);
      swap(A[i], A[A[i]]);
    }
  }

  int p = P.size();
  cout << p << endl;
  rep (i, p)
    cout << P[i].first + 1 << " " << P[i].second + 1 << endl;

  return 0;
}
