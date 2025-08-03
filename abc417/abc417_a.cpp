#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N, A, B;
  string S;
  cin >> N >> A >> B;
  if ((N < 1) || (N > 20))
    exit(1);
  if (A < 0)
    exit(1);
  if (B < 0)
    exit(1);
  if (A + B >= N)
    exit(1);
  cin >> S;
  if (S.size() != N)
    exit(1);
  for (int i = A; i < N - B; i++)
    cout << S[i];
  cout << endl;
}
