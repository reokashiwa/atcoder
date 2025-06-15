#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N;
  cin >> N;
  if ((N < 2) || (N > 60))
    exit(1);
  vector<string> S(N);
  pair<int, int> first(-1, -1), second(-1, -1);
  
  rep (i, N) {
    string s;
    cin >> s;
    rep (j, s.size()) {
      if ((s[j] != 'P') && (s[j] != '.') && (s[j] != '#'))
	exit(1);
      if (s[j] == 'P') {
	if (first.first == -1) {
	  first.first = j;
	  first.second = i;
	} else if (second.first == -1) {
	  second.first = j;
	  second.second = i;
	} else
	  exit(1);
      }
    }
  }
}
