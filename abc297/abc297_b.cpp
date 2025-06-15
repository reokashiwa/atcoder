#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  string S;
  cin >> S;
  if (S.size() != 8)
    exit(1);
  vector<int> k, q, r, b, n;
  rep (i, S.size()) {
    if (S[i] == 'K')
      k.push_back(i);
    else if (S[i] == 'Q')
      q.push_back(i);
    else if (S[i] == 'R')
      r.push_back(i);
    else if (S[i] == 'B')
      b.push_back(i);
    else if (S[i] == 'N')
      n.push_back(i);
  }
  if ((k.size() != 1) || (q.size() != 1) || (r.size() != 2) || (b.size() != 2) || (n.size() != 2))
    exit(1);

  if (((b[0] % 2 == 1) && (b[1] % 2 ==0)) || ((b[0] % 2 == 0) && (b[1] % 2 == 1))) {
    if ((k[0] > r[0]) && (k[0] < r[1])) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
  return 0;
}
