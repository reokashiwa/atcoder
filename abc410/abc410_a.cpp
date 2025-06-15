#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N;
  cin >> N;
  if ((N < 1) || (N > 100))
    exit(1);
  vector<int> A(N);
  rep (i, N) {
    int a;
    cin >> a;
    if ((a < 1) || (a > 100))
      exit(1);
    A[i] = a;
  }
  int K;
  cin >> K;
  if ((K < 1) || (K > 100))
    exit(1);
  int nn = 0;
  rep (i, N) {
    if (A[i] >= K)
      nn ++;
  }
  cout << nn << endl;
}
