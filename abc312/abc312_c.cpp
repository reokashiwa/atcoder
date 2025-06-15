#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N, M;
  cin >> N >> M;
  if ((N < 1) || (N > 2 * 10e5))
    exit(1);
  if ((M < 1) || (M > 2 * 10e5))
    exit(1);
  vector<int> A(N);
  vector<int> B(M);
  rep (i, N) {
    int a;
    cin >> a;
    if ((a < 1) || (a > 10e9))
      exit(1);
    A[i] = a;
  }
  rep (i, M) {
    int b;
    cin >> b;
    if ((b < 1) || (b > 10e9))
      exit(1);
    B[i] = b;
  }
  sort(A.begin(), A.end());
  sort(B.begin(), B.end());

  cout << "A: ";
  rep (i, N) {
    cout << A[i] << " ";
  }
  cout << endl;
  cout << "B: ";
  rep (i, N) {
    cout << B[i] << " ";
  }
  cout << endl;
  
  rep (i, N) {
    if ((i > 0) && (A[i] == A[i + 1]))
      continue;
    int seller = N - i;
    rep (j, M) {
      if ((j < M - 1) && (B[j] == B[j + 1]))
	continue;
      if ((j < M - 1) && (B[j + 1] <= A[i]))
	
    }
  }

}

