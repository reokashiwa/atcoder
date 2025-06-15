#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  string S, T;
  cin >> S >> T;
  if ((S.size() < 1) || (S.size() > 10))
    exit(1);
  if ((T.size() < 1) || (T.size() > 10))
    exit(1);
  rep (i, S.size()) {
    if (i == 0) {
      if ((S[i] < 'A') || (S[i] > 'Z'))
	exit(1);
    } else {
      if ((S[i] < 'a') || (S[i] > 'z'))
	exit(1);
    }
  }
  rep (i, T.size()) {
    if (i == 0) {
      if ((T[i] < 'A') || (T[i] > 'Z'))
	exit(1);
    } else {
      if ((T[i] < 'a') || (T[i] > 'z'))
	exit(1);
    }
  }
  cout << S << " " << "san" << endl;
}
