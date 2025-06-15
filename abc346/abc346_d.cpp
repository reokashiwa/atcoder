#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N;
  cin >> N;
  if ((N < 2) || (N > 2 * 10e5))
    exit(1);
  string S;
  cin >> S;
  if (S.size() != N)
    exit(1);
  rep (i, N) {
    if ((S[i] != '0') && (S[i] != '1'))
      exit(1);
  }
  map<int, int> C;
  rep (i, N) {
    int c;
    cin >> c;
    if ((c < 1) || (c > 10e9))
      exit(1);
    C[i] = c;
  }
  for (auto p : C)
    cout << p.first << ", " << p.second << endl;

}

