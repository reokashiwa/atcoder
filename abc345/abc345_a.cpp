#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  string S;
  cin >> S;
  int s = S.size();
  if ((s < 3) || (s > 100))
    exit(1);
  rep (i, s) {
    if ((S[i] != '<') && (S[i] != '=') && (S[i] != '>'))
      exit(1);
  }
  if (S[0] == '<') {
    if (S[s - 1] == '>') {
      bool flag = true;
      rep (i, s - 2) {
	if (S[i + 1] != '=') {
	  flag = false;
	  break;
	}
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
