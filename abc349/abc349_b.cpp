#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  string S;
  cin >> S;
  int s = S.size();
  if ((s < 1) || (s > 100))
    exit(1);
  map<char, int> M;
  rep (i, s) {
    if (M.count(S[i]))
      M[S[i]]++;
    else 
      M[S[i]] = 1;
  }
  map<int, int> N;
  for (auto p : M) {
    if (N.count(p.second))
      N[p.second]++;
    else
      N[p.second] = 1;
  }
  for (auto p : N) {
    if (p.second == 2)
      continue;
    else {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
  return 0;
}
