#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  string S, T;
  cin >> S >> T;
  map<char, bool> tmap;
  rep (i, T.size()) {
    if (!tmap.count(T[i])) tmap[T[i]] = true;
  }
  rep (i, S.size() - 1) {
    if ((S[i + 1] >= 'A') && (S[i + 1] <= 'Z')) {
      if (!tmap.count(S[i])) {
	cout << "No" << endl;
	return 0;
      }
    }
  }
  cout << "Yes" << endl;
}
