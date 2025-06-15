#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  string S;
  cin >> S;
  if ((S.size() < 2) || (S.size() > 100))
    exit(1);

  rep (i, S.size() - 1) {
    if ((S[i] < 'A') || (S[i] > 'Z'))
      exit(1);
    cout << S[i] << " ";
  }
  cout << S[S.size() - 1] << endl;
  return 0;
}
