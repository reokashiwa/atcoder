#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N, L, R;
  cin >> N >> L >> R;
  if ((N < 1) || (N > 100))
    exit(1);
  if ((L < 1) || (L > R))
    exit(1);
  if ((R < L) || (R > N))
    exit(1);
  string S;
  cin >> S;
  if (S.size() != N)
    exit(1);
  bool flag = true;
  int i = L - 1;
  while (flag) {
    if (S[i] != 'o') {
      cout << "No" << endl;
      return 0;
    }
    i++;
    if (i >= R)
      break;
  }
  cout << "Yes" << endl;
}
