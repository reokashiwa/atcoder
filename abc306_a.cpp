#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N;
  cin >> N;
  if ((N < 1) || (N > 50))
    exit(1);
  string S;
  cin >> S;
  if (S.size() != N)
    exit(1);
  rep (i, N) {
    cout << S[i] << S[i];
  }
  cout << endl;
  return 0;
}
