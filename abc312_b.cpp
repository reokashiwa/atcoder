#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N, M;
  cin >> N >> M;
  if ((N < 9) || (N > 100))
    exit(1);
  if ((M < 9) || (M > 100))
    exit(1);
  vector<string> S(N);
  rep (i, N) {
    string s;
    cin >> s;
    if (s.size() != M)
      exit(1);
    rep (j, M) {
      if ((s[j] != '.') && (s[j] != '#'))
	exit(1);
    }
    S[i] = s;
  }

  rep (i, N - 8) {
    rep (j, M - 8) {
      bool flag = true;
      rep (k, 3) {
	rep (l, 3) {
	  if (S[i + k][j + l] != '#') {
	    flag = false;
	    break;
	  }
	}
	if (! flag)
	  break;
      }
      if (! flag)
	continue;
      rep (k, 3) {
	rep (l, 3) {
	  if (S[i + k + 6][j + l + 6] != '#') {
	    flag = false;
	    break;
	  }
	}
	if (! flag)
	  break;
      }
      if (! flag)
	continue;
      rep (k, 4) {
	if (S[i + k][j + 3] != '.') {
	  flag = false;
	  break;
	}
      }
      if (! flag)
	continue;

      rep (k, 3) {
	if (S[i + 3][j + k] != '.') {
	  flag = false;
	  break;
	}
      }
      if (! flag)
	continue;

      rep (k, 4) {
	if (S[i + k + 5][j + 5] != '.') {
	  flag = false;
	  break;
	}
      }
      if (! flag)
	continue;

      rep (k, 3) {
	if (S[i + 5][j + k + 5] != '.') {
	  flag = false;
	  break;
	}
      }
      if (! flag)
	continue;
      cout << i + 1 << " " << j + 1 << endl;
    }
  }
}
