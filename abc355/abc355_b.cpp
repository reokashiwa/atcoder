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
  vector<int> A(N), B(M), AB(N + M);
  
  rep (i, N) {
    int a;
    cin >> a;
    if ((a < 1) || (a > 200))
      exit(1);
    A[i] = a;
  }

  rep (i, M) {
    int b;
    cin >> b;
    if ((b < 1) || (b > 200))
      exit(1);
    B[i] = b;
  }
  sort(A.begin(), A.end());
  sort(B.begin(), B.end());
  
  int a = 0, ab = 0;
  rep (b, M) {
    int c = 0;
    while (A[a] < B[b]) {
      AB[ab] = A[a];
      a++;
      ab++;
      c++;
      if (a > N - 1)
	break;
    }
    if (c > 1) {
      cout << "Yes" << endl;
      return 0;
    }
    AB[ab] = B[b];
    ab++;
  }
  if (N + M - ab > 1)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;

  return 0;
}



