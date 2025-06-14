#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  string S;
  cin >> S;
  if ((S.size() < 1) || (S.size() > 3 * 10e5))
    exit(1);

  string B;
  rep (i, S.size()) {
    if (S[i] == '(')
      continue;
    else if (S[i] == ')') {
      int j = 0;
      for (j = 0; j < i; j++) {
	if ((S[i - j - 1] == '(') || (S[i - j - 1] == ')'))
	  break;
      }

      rep (k, j) {
	B.pop_back();
      }
    } else if ((S[i] >= 'a') && (S[i] <= 'z')) {
      rep (j, B.size()) {
	if (B[j] == S[i]) {
	  cout << "No" << endl;
	  return 0;
	}
      }
      B.push_back(S[i]);
    }
  }
  cout << "Yes" << endl;
}
