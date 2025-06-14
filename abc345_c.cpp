#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  string S;
  cin >> S;
  int N = S.size();
  if ((N < 2) || (N > 10e6))
    exit(1);
  rep (i, N) {
    if ((S[i] < 'a') || (S[i] > 'z'))
      exit(1);
  }
  
  set<string> T;
  for (int i = 0; i < N - 1; i++) {
    for (int j = i + 1; j < N; j++) {
      if (S[i] == S[j]) {
	T.insert(S);
	continue;
      }
      char swap = S[i];
      S[i] = S[j];
      S[j] = swap;
      T.insert(S);
      S[j] = S[i];
      S[i] = swap;
    }
  }
  cout << T.size() << endl;
  return 0;
}
