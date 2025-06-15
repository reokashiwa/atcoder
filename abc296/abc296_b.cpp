#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  rep (i, 8) {
    string s;
    cin >> s;
    rep (j, 8) {
      if (s[j] == '*') {
	cout << (char) ('a' + j);
	cout << 8 - i << endl;
      }
    }
  }
}
