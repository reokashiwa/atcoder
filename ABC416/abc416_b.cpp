#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  string S;
  cin >> S;
  if ((S.size() < 1) || (S.size() > 100))
    exit(1);

  bool sharp_exist = false;
  rep (i, S.size()) {
    if (S[i] == '#') {
      sharp_exist = true;
      int min_i = i - 1;
      int max_i = i + 1;
      bool flag = false;
      for (int j = i - 1; j >= 0; j--) {
	if (S[j] == 'o') {
	  flag = true;
	  break;
	} else if (S[j] == '#') {
	  break;
	} else {
	  min_i = j;
	}
      }
      if ((! flag) && (min_i >= 0) && S[min_i] != '#')
	S[min_i] = 'o';
      flag = false;
      for (int j = i + 1; j < S.size(); j++) {
	if (S[j] == 'o') {
	  flag = true;
	  break;
	} else if (S[j] == '#') {
	  break;
	} else {
	  max_i = j;
	}
      }
      if ((! flag) && (max_i < S.size()) && S[max_i] != '#')
	S[max_i] = 'o';
    }
  }
  if (! sharp_exist)
    S[0] = 'o';
  cout << S << endl;
}
