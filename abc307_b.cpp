#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N;
  cin >> N;
  if ((N < 2) || (N > 100))
    exit(1);
  vector<string> S(N);
  rep (i, N) {
    string s;
    cin >> s;
    if ((s.size() < 1) || (s.size() > 50))
      exit(1);
    rep (j, s.size()) {
      if ((s[j] < 'a') || (s[j] > 'z'))
	exit(1);
    }
    rep (j, i) {
      if (S[j] == s)
	exit(1);
    }
    S[i] = s;
  }

  rep (i, N) {
    rep (j, N) {
      if (i == j)
	continue;
      string cat = S[i] + S[j];
      bool flag = true;
      rep (k, cat.size() / 2) {
	if (cat[k] == cat [cat.size() - 1 - k]) {
	  flag = true;
	  continue;
	} else {
	  flag = false;
	  break;
	}
	if (! flag)
	  break;
      }
      if (flag) {
	cout << "Yes" << endl;
	return 0;
      }
    }
  }
  cout << "No" << endl;
  return 0;
}
