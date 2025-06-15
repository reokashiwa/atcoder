#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N, M;
  cin >> N >> M;
  if ((N < 1) || (N > 1000))
    exit(1);
  if ((M < 1) || (M > 1000))
    exit(1);
  vector<string> S(N);
  vector<string> T(M);
  rep (i, N) {
    string s;
    cin >> s;
    if (s.size() != 6)
      exit(1);
    rep (j, s.size()) {
      if ((s[j] < '0') || (s[j] > '9'))
	exit(1);
    }
    S[i] = s;
  }

  rep (i, M) {
    string t;
    cin >> t;
    if (t.size() != 3)
      exit(1);
    rep (j, t.size()) {
      if ((t[j] < '0') || (t[j] > '9'))
	exit(1);
    }
    T[i] = t;
  }

  int num = 0;
  rep (i, N) {
    rep (j, M) {
      if ((S[i][3] == T[j][0]) && (S[i][4] == T[j][1]) && (S[i][5] == T[j][2])) {
	num++;
	break;
      }
    }
  }
  cout << num << endl;
}
