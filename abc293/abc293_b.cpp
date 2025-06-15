#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N;
  cin >> N;
  if ((N < 2) || (N > 2 * 10e5))
    exit(1);
  vector<int> A(N);
  rep(i, N) {
    int a;
    cin >> a;
    if ((a < 1) || (a > N))
      exit(1);
    if (a == i)
      exit(1);
    A[i] = a;
  }

  vector<bool> n(N, false);
  rep(i, N) {
    if (n[i] == false)
      n[A[i] - 1] = true;
  }
  int num = 0;
  rep(i, N) {
    if (n[i] == false)
      num++;
  }
  cout << num << endl;
  rep(i, N) {
    if (n[i] == false)
      cout << i << " ";
  }
  cout << endl;
}
