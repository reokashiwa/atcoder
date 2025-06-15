#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N, M;
  cin >> N >> M;
  if ((N < 1) || (N > 10e5))
    exit(1);
  if ((M < 1) || (M > 10e5))
    exit(1);
  vector<int> A(N);
  vector<int> B(M);
  rep(i, N) {
    int a;
    cin >> a;
    if ((a < 1) || (a > 10e9))
      exit(1);
    if ((i > 0) && (A[i - 1] > a))
      exit(1);
    A[i] = a;
  }

  rep(i, M) {
    int b;
    cin >> b;
    if ((b < 1) || (b > 10e9))
      exit(1);
    if ((i > 0) && (B[i - 1] > b))
      exit(1);
    B[i] = b;
  }

  int a = 0;
  vector<int> a_index(N);
  int b = 0;
  vector<int> b_index(M);
  rep(i, N + M) {
    if (a > N - 1) {
      b_index[b] = i;
      b++;
      continue;
    }
    if (b > M - 1) {
      a_index[a] = i;
      a++;
      continue;
    }
    if (A[a] < B[b]) {
      a_index[a] = i;
      a++;
    } else {
      b_index[b] = i;
      b++;
    }
  }
  rep(i, N - 1) {
    cout << a_index[i] + 1 << " ";
  }
  cout << a_index[N - 1] + 1 << endl;
  rep(i, M - 1) {
    cout << b_index[i] + 1 << " ";
  }
  cout << b_index[M - 1] + 1 << endl;
}
