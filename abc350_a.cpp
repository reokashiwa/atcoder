#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  string S;
  cin >> S;
  int s = S.size();
  if (s != 6)
    exit(1);
  if ((S[0] != 'A') || (S[1] != 'B') || (S[2] != 'C'))
    exit(1);
  int i = 0;
  rep (j, 3) {
    if ((S[j + 3] < '0') || (S[j + 3] > '9'))
      exit(1);
    i = i + (S[j + 3] - '0') * pow(10, 2 - j);
  }
  if (i == 316)
    cout << "No" << endl;
  else if ((i > 0) && (i < 350))
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return 0;
}
