#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N;
  cin >> N;
  if ((N < 1) || (N > 2 * 10e5))
    exit(1);
  vector<int> A(N);
  rep (i, N) {
    int a;
    cin >> a;
    if ((a < 1) || (a > 2 * 10e5))
      exit(1);
    A[i] = a;
  }
  int count = 0;
  rep (i, N) {
    for (int j = i + 1; j < N; j++) {
      if (j - i == A[i] + A[j])
	count ++;
    }
  }
  cout << count << endl;
}
