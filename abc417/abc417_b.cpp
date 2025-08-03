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
  vector<int> A(N), B(M);
  int cur_a = 0;
  rep (i, N) {
    int a;
    cin >> a;
    if ((a < 1) || (a > 10e9))
      exit(1);
    if (a < cur_a)
      exit(1);
    A[i] = a;
    cur_a = a;
  }
  rep (i, M) {
    int b;
    cin >> b;
    if ((b < 1) || (b > 10e9))
      exit(1);
    B[i] = b;
  }
  sort(B.begin(), B.end());
  int b_index = 0;
  rep (i, N) {
    for (int j = b_index; j < M; j++) {
      if (A[i] > B[j]) {
	b_index++;
	continue;
      } else
	break;
    }
    if (A[i] == B[b_index]) {
      b_index++;
      continue;
    } else {
      cout << A[i] << " ";
    }
  }
  cout << endl;
}
