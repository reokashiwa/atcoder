#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N, K;
  cin >> N >> K;
  if ((K < 2) || (K > 10))
    exit(1);
  if ((N < 2) || (N > 10))
    exit(1);
  if (K > N)
    exit(1);
  string S;
  cin >> S;
  size_t s = S.size();
  if (s != N)
    exit(1);
  rep (i, N) {
    if ((S[i] < 'a') || (S[i] > 'z'))
      exit(1);
  }
}
