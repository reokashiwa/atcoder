#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N;
  cin >> N;
  if ((N < 1) || (N > 10))
    exit(1);

  vector<string> S(N);
  rep (i, N) {
    string s;
    cin >> s;
    if ((s.size() < 1) || (s.size() > 10))
      exit(1);
    rep (j, s.size()) {
      if (((s[j] < 'a') || (s[j] > 'z')) &&
	  ((s[j] < 'A') || (s[j] > 'Z')) &&
	  ((s[j] < '0') || (s[j] > '9')))
	exit(1);
    }
    S[i] = s;
  }

  rep (i, N) {
    cout << S[N - 1 - i] << endl;
  }
}
