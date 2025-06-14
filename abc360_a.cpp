#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  string S;
  cin >> S;
  if (S.size() != 3)
    exit(1);
  bool r = false;
  rep (i, 3) {
    if (S[i] == 'R')
      r = true;
    if (S[i] == 'M') {
      if (r)
	cout << "Yes" << endl;
      else
	cout << "No" << endl;
    }
  }
}
