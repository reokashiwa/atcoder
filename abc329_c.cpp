#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N;
  cin >> N;
  if ((N < 1) || (N > 2 * 10e5))
    exit(1);
  string S;
  cin >> S;
  if (S.size() != N)
    exit(1);
  rep (i, N) {
    if ((S[i] < 'a') || (S[i] > 'z'))
      exit(1);
  }

  map<string, int> M;
  if (N == 1) {
    cout << 1 << endl;
    return 0;
  }
  rep (i, N - 1) {
    for (int j = 1; j < N - i + 1; j++) {
      string ss = S.substr(i, j);
      sort(ss.begin(), ss.end());
      if (ss[0] == ss[ss.size() - 1]) {
	if (M.count(ss) == 0) {
	  M[ss] = 0;
	} else {
	  M[ss] = M[ss] + 1;
	}
      } else
	break;
    }
  }
  cout << M.size() << endl;
}
