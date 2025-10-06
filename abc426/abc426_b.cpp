#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  string S;
  cin >> S;
  if ((S.size() < 3) || (S.size() > 10))
    exit(1);
  map<char, int> M;
  rep (i, S.size()) {
    if ((S[i] < 'a') || (S[i] > 'z'))
      exit(1);
    if (! M.count(S[i]))
      M[S[i]] = 1;
    else
      M[S[i]]++;
  }
  for (auto p : M) {
    auto key = p.first;
    auto value = p.second;
    if (value == 1)
      cout << key << endl;
  }
}
