#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N;
  cin >> N;
  if ((N < 2) || (N > 100))
    exit(1);
  vector<int> A(N);
  rep (i, N) {
    int a;
    cin >> a;
    if ((a < 1) || (a > 100))
      exit(1);
    if ((i > 0) && (A[i - 1] == a))
      exit(1);
    A[i] = a;
  }

  rep (i, N - 1) {
    int d = A[i + 1] - A[i];
    if ((d == 1) || (d == -1))
      cout << A[i] << " ";
    else if (d > 1) {
      for (int j = A[i]; j < A[i + 1]; j++)
	cout << j << " ";
    } else if (d < -1) {
      for (int j = A[i]; j > A[i + 1]; j--)
	cout << j << " ";
    }
  }
  cout << A[N - 1] << endl;
  return 0;
}
