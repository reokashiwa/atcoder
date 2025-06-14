#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N;
  cin >> N;
  if ((N < 1) || (N > 10e5))
    exit(1);
  vector<vector<string>> ST(vector<string> (2));
  // vector<string> T(N);

  rep(i, N) {
    string s, t;
    cin >> s >> t;
    if ((s.size() < 1) || (s.size() > 8))
      exit(1);
    if ((t.size() < 1) || (t.size() > 8))
      exit(1);
    if (s == t)
      exit(1);
    rep(j, N) {
      if (S[j] == s)
	exit(1);
      if (T[j] == t)
	exit(1);
    }
    ST[i][0] = s;
    ST[i][1] = t;
  }
  sort(ST.begin(), ST.end());
  
  vector<string> V;
  vector<string> W;
  rep(i, N) {
    rep(j, N) {
      if (S[i] == T[j]) {
	V.push_back(S[i]);
	V.push_back(S[j]);
	
	W.push_back(T[i]);
	W.push_back(T[j]);
	break;
      }
    }
  }

  sort(V.begin(), V.end());
  sort(W.begin(), W.end());

  rep(i, V.size()) {
    if (V[i] != W[i]) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
  
}
