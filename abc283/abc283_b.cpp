#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N;
  cin >> N;
  if ((N < 1) || (N > 10e5))
    exit(1);
  vector<int> A;
  rep (i, N) {
    int a;
    cin >> a;
    if ((a < 0) || (a > 10e9))
      exit(1);
    A[i] = a;
  }

  int Q;
  cin >> Q;
  if ((Q < 1) || (Q > 10e5))
    exit(1);

  rep (i, Q) {
    int f;
    cin >> f;
    if (f == 1) {
      int k;
      cin >> k;
      if ((k < 1) || (k > N))
	exit(1);
      int x;
      cin >> x;
      if ((x < 0) || (x > 10e9))
	exit(1);
      A[k] = x;
    } else if (f == 2) {
      int k;
      cin >> k;
      if ((k < 1) || (k > N))
	exit(1);
      cout << A[k] << endl;
    } else
      exit(1);
  }
}
