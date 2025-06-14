#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N, A, B;
  cin >> N >> A >> B;
  if ((N < 1) || (N > 2 * 10e5))
    exit(1);
  if ((A < 1) || (A > 10e9))
    exit(1);
  if ((B < 1) || (B > 10e9))
    exit(1);
  int pd = 0;
  vector<int> D(N);
  rep (i, N) {
    int d;
    cin >> d;
    if ((d < 1) || (d > 10e9))
      exit(1);
    if (pd >= d)
      exit(1);
    D[i] = d % (A + B);
    pd = d;
  }
  sort(D.begin(), D.end());
  int min = D[0];
  int max = D[D.size() - 1];
  if (max - min < A)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return 0;
}
