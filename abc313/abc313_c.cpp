#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N;
  cin >> N;
  if ((N < 1) || (N > 2 * 10e5))
    exit(1);
  vector<long> A(N);
  rep (i, N) {
    long a;
    cin >> a;
    if ((a < 1) || (a > 10e9))
      exit(1);
    A[i] = a;
  }
  sort(A.begin(), A.end());
  /*
  rep (i, N) {
    cout << A[i] << ", ";
  }
  cout << endl;
  */
  long count = 0;
  while (A[N - 1] - A[0] > 1) {
    long diff;
    if ((A[N - 1] - A[0]) % 2 == 0)
      diff = (A[N - 1] - A[0]) / 2;
    else if ((A[N - 1] - A[0]) <= 3)
      diff = 1;
    else
      diff = (A[N - 1] - A[0]) / 2 - 1;
    cout << diff << endl;
    A[0] += diff;
    A[N - 1] -= diff;
    count += (long) diff;
    cout << count << endl;
    sort(A.begin(), A.end());
    rep (i, N) {
      cout << A[i] << ", ";
    }
    cout << endl;
  }
  cout << count << endl;
}
