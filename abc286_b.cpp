#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int n;
  cin >> n;
  if ((n < 1) || (n > 1000))
    exit(1);
  string s;
  cin >> s;
  if (s.size() != n)
    exit(1);

  bool nflag = false;
  rep (i, n) {
    if (s[i] == 'n') {
      nflag = true;
      cout << 'n';
      continue;
    } else if (nflag == true) {
      if (s[i] == 'a') {
	cout << "ya";
      } else {
	cout << s[i];
      }
      nflag = false;
    } else
      cout << s[i];
  }
  cout << endl;
}
