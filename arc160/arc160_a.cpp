#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N;
  cin >> N;

  if ((N < 1) || (N > 7000))
    exit(1);
  int K;
  cin >> K;
  if ((K < 1) || (K > N * (N + 1) / 2))
    exit(1);
  vector<int> A(N);
  rep (i, N) {
    int a;
    cin >> a;
    if ((a < 1) || (a > 7000))
      exit(1);
    rep (j, i) {
      if (A[j] == a)
	exit(1);
    }
    A[i] = a;
  }
  vector<vector<int>> AA(N * (N + 1) / 2, vector<int>(N));

  int n = 0;
  rep (l, N) {
    for (int r = l; r < N; r++) {
      vector<int> a(N);
      for (int i = 0; i < l; i++)
	a[i] = A[i];
      for (int i = l; i <= r; i++)
	a[i] = A[r - i + l];
      if (r + 1 < N) {
	for (int i = r + 1; i < N; i++)
	  a[i] = A[i];
      }
      /*
      cout << "f(" << l << ", " << r << ") = ";
      rep (i, N) {
	cout << a[i] << " ";
      }
      cout << endl;
      */
      AA[n] = a;
      n++;
    }
  }
  /*
  rep (i, AA.size()) {
    rep (j, N) {
      cout << AA[i][j] << " ";
    }
    cout << endl;
  }
  */ 
  sort(AA.begin(), AA.end());
  /*
  rep (i, AA.size()) {
    rep (j, N) {
      cout << AA[i][j] << " ";
    }
    cout << endl;
  }
  */
  rep (i, N - 1) {
    cout << AA[K - 1][i] << " ";
  }
  cout << AA[K - 1][N - 1] << endl;
}
