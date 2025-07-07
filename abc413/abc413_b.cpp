#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N;
  cin >> N;
  if ((N < 1) || (N > 100))
    exit(1);
  vector<string> S(N);
  rep (i, N) {
    string s;
    cin >> s;
    if ((s.size() < 1) || (s.size() > 10))
      exit(1);
    S[i] = s;
  }
  vector<string> SS;
  rep (i, N) {
    rep (j, N) {
      if (i != j) {
	string s = S[i] + S[j];
	SS.push_back(s);
      }
    }
  }
  sort(SS.begin(), SS.end());
  int count = 1;
  string s = SS[0];
  for (int i = 1; i < SS.size(); i++) {
    if (s != SS[i]) {
      count ++;
      s = SS[i];
    }
  }
  cout << count << endl;
  return 0;
}
