#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N;
  cin >> N;
  if ((N < 1) || (N > 100))
    exit(1);
  map<int, int> A;
  rep (i, N) {
    int a;
    cin >> a;
    if ((a < 1) || (a > 100))
      exit(1);
    A[a] = 0;
  }
  int X;
  cin >> X;
  if ((X < 1) || (X > 100))
    exit(1);
  if (A.count(X))
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}
