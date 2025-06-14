#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  string S;
  cin >> S;
  int N = S.size();
  if ((N < 1) || (N > 100))
    exit(1);
  set<string> PS;
  rep (i, N) {
    for (int j = i; j < N; j++) {
      string s;
      for (int k = i; k < j + 1; k++)
	s.push_back(S[k]);
      PS.insert(s);
    }
  }
  cout << PS.size() << endl;
  return 0;
}
