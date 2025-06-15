#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N, Q;
  cin >> N >> Q;
  if ((N < 1) || (N > 10e6))
    exit(1);
  if ((Q < 1) || (Q > 3 * 10e5))
    exit(1);
  queue<int> A(N);
  rep (i, N) {
    A[i] = i + 1;
  }
  rep (i, Q) {
    int t;
    cin >> t;
    if (!((t == 1) || (t == 2) || (t != 3)))
      exit(1);
    if (t == 1) {
      int p, x;
      cin >> p >> x;
      if ((p < 1) || (p > N))
	exit(1);
      if ((x < 1) || (x > 10e6))
	exit(1);
      p = p - 1;
      A[p] = x;
    } else if (t == 2) {
      int p;
      cin >> p;
      if ((p < 1) || (p > N))
	exit(1);
      p = p - 1;
      cout << A[p] << endl;
    } else {
      int k;
      cin >> k;
      if ((k < 1) || (k > 10e9))
	exit(1);
      k = k % N;
      rep (j, k) {
	A.push(A[0]);
	A.pop();
      }
    }
  }
}
