#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int case(void) {
  int N;
  cin >> N;
  if ((N < 2) || (N > 2000))
    exit(1);
  
  string S;
  cin >> S;
  if (S.size() != N)
    exit(1);
  rep (i, N) {
    if ((S[i] < 'a') || (S[i] > 'z'))
      exit(1);
  }
}

int main() {
  int T;
  cin >> T;
  if ((T < 1) || (T > 2000))
    exit(1);
  rep (i, T) {
    case();
  }
  return 0;
}
