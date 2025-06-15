#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N;
  cin >> N;
  if ((N < 1) || (N > 100))
    exit(1);
  string S;
  cin >> S;
  if (S.size() != N)
    exit(1);
  int t = 0, a = 0;
  rep (i, N) {
    if ((S[i] != 'T') && (S[i] != 'A'))
      exit(1);
    if (S[i] == 'T')
      t++;
    else if (S[i] == 'A')
      a++;
    if ((t >= N / 2) && (t > a)) {
      cout << "T" << endl;
      return 0;
    } else if ((a >= N / 2) && (t < a)) {
      cout << "A" << endl;
      return 0;
    }
  }
}
