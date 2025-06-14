#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N, K, X;
  cin >> N >> K >> X;
  if ((N < 1) || (N > 100))
    exit(1);
  if ((K < 1) || (K > 100))
    exit(1);
  if (K > N)
    exit(1);
  if ((X < 1) || (X > 100))
    exit(1);
  rep (i, N) {
    int A;
    cin >> A;
    cout << A << " ";
    if (i == K - 1)
      cout << X << " ";
  }
  cout << endl;
}
