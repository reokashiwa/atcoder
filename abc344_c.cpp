#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N, M, L;
  cin >> N;
  if ((N < 1) || (N > 100))
    exit(1);
  vector<int> A(N);
  rep (i, N) {
    int a;
    cin >> a;
    if ((a < 0) || (a > 10e8))
      exit(1);
    A[i] = a;
  }
  cin >> M;
  if ((M < 1) || (M > 100))
    exit(1);
  vector<int> B(M);
  rep (i, M) {
    int b;
    cin >> b;
    if ((b < 0) || (b > 10e8))
      exit(1);
    B[i] = b;
  }
  cin >> L;
  if ((L < 1) || (L > 100))
    exit(1);
  vector<int> C(L);
  rep (i, L) {
    int c;
    cin >> c;
    if ((c < 0) || (c > 10e8))
      exit(1);
    C[i] = c;
  }

  vector<int> ABC;
  rep (n, N) {
    rep (m, M) {
      rep (l, L) {
	ABC.push_back(A[n] + B[m] + C[l]);
      }
    }
  }
  int abc = ABC.size();
  sort(ABC.begin(), ABC.end());
  
  int Q;
  cin >> Q;
  if ((Q < 1) || (Q > 2 * 10e5))
    exit(1);
  rep (i, Q) {
    int X;
    cin >> X;
    if ((X < 0) || (X > 3 * 10e8))
      exit(1);
    bool flag = false;
    int l = 0;
    int u = abc;
    while (true) {
      bool flag = false;
      if (u - l < 10) {
	for (int j = l; j < u; j++) {
	  if (ABC[j] == X) {
	    flag = true;
	    break;
	  }
	}
	if (flag)
	  cout << "Yes" << endl;
	else
	  cout << "No" << endl;
	break;
      } else {
	if (ABC[u - ((u - l) / 2)] < X) {
	  l = u - ((u - l) / 2) - 1;
	} else
	  u = u - ((u - l) / 2) + 1;
      }
    }
  }
  return 0;
}
