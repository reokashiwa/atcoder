#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N;
  string S;
  cin >> N >> S;

  if ((N < 2) || (N > 5000))
    exit(1);
  if (S.size() != N)
    exit(1);
  rep(i, N) {
    if ((S[i] < 'a') || (S[i] > 'z'))
      exit(1);
  }

  for (int i = 1; i < N; i++) {
    int max_l = -1;
    rep(j, N - i) {
      if (S[j] != S[j + i])
	max_l = j;
      else
	break;
    }
    cout << max_l + 1 << endl;
  }
}
