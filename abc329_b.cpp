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
    A[i] = a;
  }
  sort(A.begin(), A.end());
  int max = A[A.size() - 1];
  for (int i = A.size() - 1; i >= 0; i--) {
    if (A[i] < max) {
      cout << A[i] << endl;
      return 0;
    }
      
  }
}
